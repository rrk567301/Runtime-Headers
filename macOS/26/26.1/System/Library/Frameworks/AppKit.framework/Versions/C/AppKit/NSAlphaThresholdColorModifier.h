@class NSColor, NSString;

@interface NSAlphaThresholdColorModifier : NSObject <NSDynamicColorModifier>

@property double alphaThreshold;
@property (copy) NSColor *belowThresholdColor;
@property (copy) NSColor *aboveThresholdColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithAlphaThreshold:(double)a0 belowThresholdColor:(id)a1 aboveThresholdColor:(id)a2;
- (id)colorByApplyingToColor:(id)a0;

@end
