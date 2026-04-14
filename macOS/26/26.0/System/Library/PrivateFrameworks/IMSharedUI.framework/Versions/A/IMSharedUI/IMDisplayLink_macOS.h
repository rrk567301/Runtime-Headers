@interface IMDisplayLink_macOS : IMDisplayLink

@property (nonatomic) struct __CVDisplayLink { } *displayLink;

- (void)schedule;
- (BOOL)isValid;
- (void)invalidate;

@end
