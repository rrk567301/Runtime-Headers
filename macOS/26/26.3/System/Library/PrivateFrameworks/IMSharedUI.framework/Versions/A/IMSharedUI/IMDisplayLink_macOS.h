@interface IMDisplayLink_macOS : IMDisplayLink

@property (nonatomic) struct __CVDisplayLink { } *displayLink;

- (void)invalidate;
- (void)schedule;
- (BOOL)isValid;

@end
