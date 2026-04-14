@interface LUI2Constants : NSObject

@property (class, readonly) double primaryShadowOpacity;
@property (class, readonly) double primaryShadowRadius;
@property (class, readonly) double secondaryShadowOpacity;
@property (class, readonly) double secondaryShadowRadius;

+ (double)secondaryShadowRadius;
+ (double)secondaryShadowOpacity;
+ (double)primaryShadowRadius;
+ (double)primaryShadowOpacity;

@end
