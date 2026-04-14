@interface AVBOUILookup : NSObject

+ (void)loadData;
+ (unsigned long long)ouiForEUI48:(unsigned long long)a0 ouiType:(long long *)a1 uniquePart:(unsigned int *)a2;
+ (id)manufacturerForEUI48:(unsigned long long)a0;
+ (id)manufacturerForEUI48:(unsigned long long)a0 ouiType:(long long *)a1;
+ (id)manufacturerForEUI48:(unsigned long long)a0 ouiType:(long long *)a1 uniquePart:(unsigned int *)a2;
+ (id)manufacturerForEUI64:(unsigned long long)a0;
+ (id)manufacturerForEUI64:(unsigned long long)a0 ouiType:(long long *)a1;
+ (id)manufacturerForEUI64:(unsigned long long)a0 ouiType:(long long *)a1 uniquePart:(unsigned long long *)a2;
+ (id)manufacturerForEUI64:(unsigned long long)a0 ouiType:(long long *)a1 uniquePart:(unsigned long long *)a2 expandedFromEUI48:(BOOL *)a3;
+ (id)manufacturerForMACAddress:(id)a0;
+ (id)manufacturerForMACAddress:(id)a0 ouiType:(long long *)a1;
+ (id)manufacturerForMACAddress:(id)a0 ouiType:(long long *)a1 uniquePart:(unsigned int *)a2;
+ (unsigned long long)ouiForEUI64:(unsigned long long)a0 ouiType:(long long *)a1 uniquePart:(unsigned long long *)a2 expandedFromEUI48:(BOOL *)a3;

@end
