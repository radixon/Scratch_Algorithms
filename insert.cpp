	#include <iostream>
	
	
	
	int *insertsort(int *a, int len)
	{
		int key(0);
		int i(0);
				 
		for(int j=0; j<len; j++)
		{
			key = a[j];
			i = j - 1;
			while(i>=0 && a[i]>key)
			{
				a[i+1] = a[i];
				i = i - 1;
			}
			a[i+1] = key;
		}
		return a;
	}
	int main(){
				
		int val[] = {4727250, 4731518, 2202188, 2007875, 7183904, 9593532, 1325896, 7480368, 3076441, 3199624, 6113500, 5134514, 5026010, 5228817, 4612188,
 				4317213, 4960974, 4105213, 7062535, 2222563, 4820299, 9047661, 9812211, 6007711, 1252742, 7313263, 2369936, 6394267, 5388952, 9882463,
 				7610053, 3955734, 1203069, 2964374, 9262278, 5403172, 8472231, 8152933, 1840828, 2818540, 6615919, 4433721, 3520708, 4751765, 5123484,
 				1446208, 3477065, 2284629, 8421509, 1388508, 3759469, 6073927, 6152368, 7018287, 5050984, 3178919, 3926094, 2068960, 6400090, 4806926,
 				8667418, 7690382, 2465222, 8864788, 4281954, 7187204, 1502989, 5095319, 7732106, 3354256, 1452131, 1867084, 8495084, 9261860, 2636202,
 				8468955, 5402498, 9767694, 3028367, 8232039, 6199282, 5580953, 8678036, 1132098, 6343026, 1030897, 4583553, 8289497, 1980780, 2832919,
 				5263934, 7738859, 3799670, 5599893, 5983900, 8715904, 1068500, 9601719, 5204341, 5101090, 7213270, 4667371, 5538804, 5528232, 8342248,
 				7892644, 5076333, 7542595, 1884369, 9531000, 6379181, 3031514, 5604039, 9570505, 8004037, 6853756, 8085019, 8801745, 1773196, 1152496,
 				7124347, 1730126, 7239132, 3544629, 2640181, 6849163, 9348216, 3219461, 4210505, 2510983, 1509657, 5188359, 9741343, 5860713, 8907618,
 				1379533, 9379359, 7426192, 4666347, 4067885, 2209520, 9279412, 6502727, 5003610, 1970994, 6492959, 5028404, 8983430, 7119774, 4155828,
 				7847517, 6842256, 1227877, 4669999, 3525988, 9852567, 8265448, 4412528, 9071513, 8444513, 6649125, 1579440, 3455851, 5785300, 9191609,
 				3567719, 4218423, 8715228, 6558483, 6136120, 6065342, 5920833, 6151798, 1912397, 7048751, 7526769, 4092905, 2155332, 4998066, 3088222,
 				5505129, 4289418, 3681337, 2873473, 3930257, 7027164, 8429606, 4162954, 5723657, 9564105, 5793581, 1249651, 1988428, 5542873, 4013704,
 				3377403, 9592567, 4385551, 9696887, 8699764, 1090394, 6426906, 7214081, 8599663, 8487228, 9118312, 5078704, 7991742, 9972278, 7052772,
 				8402795, 4736229, 2958353, 4853095, 9919602, 9412181, 7285954, 6081549, 6597491, 8168179, 8064569, 4224653, 1139587, 2797045, 4581296,
 				3518567, 2730631, 6341645, 9231941, 7872815, 2270434, 5780661, 6302121, 5480952, 1156360, 2239991, 8405891, 8680004, 8834110, 3276576,
 				4078484, 3063764, 8567222, 2391957, 9019315, 5778833, 3190897, 6362035, 2824642, 2105856, 4092309, 6057730, 3877138, 5334364, 9584870,
 				1785156, 9019451, 7740054, 9016137, 3325153, 1997879, 4879089, 3550610, 6046001, 4024587, 4472096, 8760730, 6432681, 5145351, 4389930,
 				4768538, 9129003, 5492562, 4740378, 9241498, 6451918, 2022360, 4987210, 1349274, 4599478, 2249746, 8629687, 1165226, 1384552, 5762727,
 				5361746, 3629085, 5733826, 5245529, 7837648, 7381773, 1518831, 2634754, 3292887, 8555490, 7951442, 7591521, 6282707, 8996076, 5306157,
 				6246520, 7221621, 9891714, 3533951, 5351876, 5480626, 9859972, 9849265, 9251990, 5935045, 4967333, 1794957, 5907550, 5875341, 3005685,
 				3249171, 7247719, 1553012, 1958425, 5842009, 3592110, 4188766, 7369054, 1761788, 2792249, 6451664, 2400792, 6423923, 4076456, 7139263,
 				1641141, 3158757, 3682560, 3449413, 9486250, 1413381, 7158486, 3222331, 9403689, 2999549, 6938820, 1927386, 1963230, 9710938, 9755364,
 				5372890, 3116108, 2626542, 8663252, 2102652, 9328065, 1903106, 4505792, 3629079, 5976326, 4315925, 4299485, 4992521, 8038537, 6876141,
 				8885398, 7434489, 1195108, 1757024, 4401654, 6877220, 3497389, 9918714, 9489722, 6784157, 9000012, 4988175, 5071069, 6757123, 5722860,
 				9347345, 2474646, 6788775, 6852283, 9333442, 6378618, 1875085, 9481495, 3912362, 9907107, 7313932, 9082027, 7454809, 7920703, 4606353,
 				3493788, 6829637, 5405420, 2526293, 9601957, 7084896, 2200420, 8261444, 4886320, 4129046, 7654297, 3901118, 4288974, 6316058, 5581837,
 				8207661, 7557181, 6109078, 7776671, 7014572, 1089664, 3362652, 3120773, 5686332, 7471781, 3387142, 5675566, 1221252, 8432363, 6631960,
 				7835628, 9408684, 9618704, 4085126, 4814732, 3227470, 9861847, 3933584, 1195361, 4205527, 7063197, 3000341, 2102501, 6559916, 7898007,
 				1815048, 1881789, 3083099, 2716193, 9772063, 8143159, 9986002, 3502987, 6328651, 9866749, 8367236, 4001364, 1121379, 7022393, 1051604,
 				2716774, 3332196, 2988836, 5587560, 2900435, 6269311, 3568502, 1555458, 8479958, 2501167, 9424098, 7625344, 7914653, 7299353, 3285746,
 				4244046, 6626886, 8034511, 7333728, 4475451, 9700821, 9562783, 3133834, 1004194, 1494249, 7170817, 2270404, 6397217, 3939343, 8181722,
 				7419597, 7666008, 9886370, 2428070, 9197557, 8635753, 2072395, 9168186, 9632006, 8949086, 5272525, 5979977, 5843364, 3841089, 3592186,
 				7366910, 5266213, 8922055, 5128934, 6181321};
		
		int arrSize = *(&val + 1) - val;
		int *x;
		
		x = insertsort(val,arrSize);
		for(int i=0;i<arrSize;i++)
			std::cout << x[i] << " ";
	}
