@interface IMDisplayLink_macOS : IMDisplayLink

@property (nonatomic) struct __CVDisplayLink { } *displayLink;

- (void)invalidate;
- (BOOL)isValid;
- (void)schedule;

@end
