@interface SCNDelegateSource : SCNImageSource

@property (retain, nonatomic) id delegate;

- (void)dealloc;
- (char)isOpaque;
- (id)textureSource;

@end
