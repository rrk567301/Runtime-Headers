@interface CRDeviceMap : NSObject

+ (id)currentDevice;
+ (BOOL)hasMesa;
+ (id)getKeysWithSPC:(id)a0;
+ (id)getComponentName:(int)a0;
+ (id)getComponentNameWithSPC:(id)a0;
+ (int)getComponentTypeWithSPC:(id)a0;
+ (id)getInternalName:(int)a0;
+ (id)getKeysInComponent:(int)a0;
+ (id)getLocalizationKey:(int)a0;
+ (id)getSPCWithComponent:(int)a0;
+ (id)getSupportedComponentTypes;
+ (BOOL)isStrongComponent:(int)a0;
+ (BOOL)supportElabel;
+ (BOOL)supportHarvestPearl;
+ (BOOL)supportLiDAR;
+ (BOOL)supportMLBOnlyRepair;
+ (BOOL)supportPeCoNet;
+ (BOOL)supportRepair:(int)a0;

@end
