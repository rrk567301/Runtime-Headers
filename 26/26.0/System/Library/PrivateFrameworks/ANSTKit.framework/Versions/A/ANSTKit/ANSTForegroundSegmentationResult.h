@interface ANSTForegroundSegmentationResult : ANSTResult

@property (readonly, nonatomic) struct __CVBuffer { } *semanticMap;

+ (id)new;

- (id)_init;
- (void)dealloc;
- (id)init;
- (id)initWithMask:(struct __CVBuffer { } *)a0;

@end
