@interface SystemOverride : NSObject

+ (char)getSystemOverrideForKey:(id)a0;
+ (char)getSystemOverrideForKey:(id)a0 mountPoint:(id)a1;
+ (char)resetSystemOverrides;
+ (char)resetSystemOverridesForMountPoint:(id)a0;
+ (char)setSystemOverrideValue:(char)a0 forKey:(id)a1;
+ (char)setSystemOverrideValue:(char)a0 forKey:(id)a1 mountPoint:(id)a2;
+ (id)validSystemOverrideKeys;

@end
