﻿/*
 * complementary_sin.c
 *
 * Created: 06/02/2019 10:41:55 ص
 *  Author: ahmed
 */
#include <asf.h>
#include <trig.h>


const float compsin_lup_table[] = {
	1, 0.999987499921874, 0.999949998749938, 0.999887493671163, 0.999799979995999,
	0.99968745115661, 0.999549898704412, 0.999387312306895, 0.999199679743744, 0.998986986902232,
	0.998749217771909, 0.998486354438557, 0.998198377077422, 0.99788526394571, 0.997546991374341,
	0.997183533758957, 0.996794863550169, 0.996380951243047, 0.995941765365827, 0.995477272467835,
	0.99498743710662, 0.994472221834275, 0.993931587182941, 0.993365491649473, 0.992773891679269,
	0.992156741649222, 0.991513993849809, 0.99084559846628, 0.990151503558925, 0.989431655042429,
	0.988685996664259, 0.987914469982093, 0.987117014340245, 0.986293566845085, 0.985444062339411,
	0.984568433375761, 0.983666610188635, 0.982738520665594, 0.981784090317214, 0.980803242245864,
	0.979795897113271, 0.978761973106843, 0.977701385904715, 0.976614048639482, 0.975499871860576,
	0.974358763495254, 0.973190628808149, 0.971995370359345, 0.970772887960928, 0.969523078631963,
	0.968245836551854, 0.966941053012023, 0.965608616365865, 0.964248411976914, 0.962860322165162,
	0.961444226151471, 0.96, 0.958527516558601, 0.957026645397086, 0.955497252743303,
	0.953939201416946, 0.952352350760998, 0.950736556570746, 0.949091671020244, 0.947417542586161,
	0.945714015968887, 0.943980932010811, 0.942218127611648, 0.9404254356407, 0.938602684845936,
	0.93674969975976, 0.934866300601321, 0.932952303175248, 0.931007518766632, 0.929031754032121,
	0.927024810886958, 0.924986486387774, 0.922916572610981, 0.920814856526544, 0.918681119866954,
	0.916515138991168, 0.914316684743311, 0.912085522305885, 0.909821411047245, 0.907524104363074,
	0.905193349511583, 0.902828887442133, 0.900430452616969, 0.897997772825746, 0.895530568992483,
	0.893028554974587, 0.890491437353555, 0.887918915216924, 0.885310679931062, 0.882666414904294,
	0.879985795339902, 0.877268487978452, 0.874514150828904, 0.8717224328879, 0.868892973846607,
	0.866025403784438, 0.863119342848948, 0.860174400921115, 0.857190177265232, 0.854166260162505,
	0.85110222652746, 0.847997641506154, 0.844852058055136, 0.841665016500032, 0.838436044072534,
	0.835164654424503, 0.831850347117797, 0.828492607088319, 0.825090904082695, 0.821644692065859,
	0.818153408597678, 0.814616474176652, 0.811033291548503, 0.807403244977378, 0.803725699477129,
	0.8, 0.796225470579785, 0.792401413426301, 0.78852710796776, 0.784601809837321,
	0.780624749799799, 0.776595132614157, 0.772512135827004, 0.768374908491941, 0.764182569809073,
	0.759934207678533, 0.755628877161268, 0.751265598839718, 0.746843357070276, 0.742361098118698,
	0.737817728168685, 0.733212111192934, 0.728543066674853, 0.723809367167902, 0.719009735678175,
	0.714142842854284, 0.7092073039669, 0.70420167565833, 0.699124452440336, 0.693974062915898,
	0.688748865697795, 0.68344714499367, 0.678067105823604, 0.672606868832009, 0.667064464650906,
	0.661437827766147, 0.655724789831831, 0.649923072370876, 0.6440302787913, 0.63804388563797,
	0.631961232988226, 0.62577951388648, 0.619495762697372, 0.613106842238773, 0.606609429534358,
	0.599999999999999, 0.593274809847847, 0.586429876455829, 0.5794609564069, 0.572363520850167,
	0.565132727772865, 0.557763390695373, 0.550249943207629, 0.54258639865002, 0.534766304099276,
	0.526782687642636, 0.518627997701627, 0.510294032886922, 0.501771860510331, 0.493051721424841,
	0.484122918275926, 0.474973683481515, 0.465591022250213, 0.455960524607119, 0.446066138593817,
	0.435889894354066, 0.425411565428114, 0.414608248832556, 0.403453838747382, 0.391918358845307,
	0.379967103839265, 0.36755951898978, 0.354647712526105, 0.341174442184638, 0.327070328828524,
	0.312249899919918, 0.296605798999275, 0.279999999999997, 0.262249880838864, 0.243104915622861,
	0.222204860432886, 0.19899748742132, 0.17255433926737, 0.141067359796653, 9.98749217771832E-02
};

float com_sin(float val)
{
	uint32_t indx = val * 200;
	if (val >= 1) return 0;
	return compsin_lup_table[indx];
}