@class NSColor;

@interface NSProgressIndicatorConfiguration : NSObject <NSCopying>

@property double progress;
@property unsigned long long controlSize;
@property unsigned long long style;
@property char usesThreadedAnimation;
@property (getter=isIndeterminate) char indeterminate;
@property (getter=isBackgroundEmphasized) char backgroundEmphasized;
@property (retain) NSColor *roundDeterminateColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
