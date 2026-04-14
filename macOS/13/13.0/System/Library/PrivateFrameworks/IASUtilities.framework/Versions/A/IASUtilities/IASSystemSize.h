@interface IASSystemSize : NSObject

+ (id)estimatedSystemSizeOfVolume:(id)a0;
+ (id)estimatedSystemSize;
+ (id)_nearestVersionInSystemSizes:(id)a0 version:(id)a1 isServer:(BOOL)a2;
+ (id)_volumeSystemVersion:(id)a0;
+ (BOOL)_volumeIsServer:(id)a0;

@end
