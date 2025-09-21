@interface IMDisplayLink_macOS : IMDisplayLink

@property (nonatomic) struct __CVDisplayLink { } *displayLink;

- (char)isValid;
- (void)invalidate;
- (void)schedule;

@end
