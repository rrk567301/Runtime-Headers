@class NSString;

@interface NSHighContrastForegroundColorModifier : NSObject <NSDynamicColorModifier>

@property double luminanceThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)colorByApplyingToColor:(id)a0;
- (id)initWithLuminanceThreshold:(double)a0;

@end
