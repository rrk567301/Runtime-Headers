@class NSColor;

@interface NSProgressIndicatorConfiguration : NSObject <NSCopying>

@property double progress;
@property unsigned long long controlSize;
@property unsigned long long style;
@property BOOL usesThreadedAnimation;
@property (getter=isIndeterminate) BOOL indeterminate;
@property (getter=isBackgroundEmphasized) BOOL backgroundEmphasized;
@property (retain) NSColor *roundDeterminateColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
