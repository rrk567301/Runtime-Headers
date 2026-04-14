@interface IMDisplayLink_macOS : IMDisplayLink

@property (nonatomic) struct __CVDisplayLink { } *displayLink;

- (void)schedule;
- (void)invalidate;
- (BOOL)isValid;

@end
