@interface IASSystemSize : NSObject

+ (id)_nearestVersionInSystemSizes:(id)a0 version:(id)a1 isServer:(char)a2;
+ (char)_volumeIsServer:(id)a0;
+ (id)_volumeSystemVersion:(id)a0;
+ (id)estimatedSystemSize;
+ (id)estimatedSystemSizeOfVolume:(id)a0;

@end
