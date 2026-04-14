@interface ANSTForegroundSegmentationResult : ANSTResult

@property (readonly, nonatomic) struct __CVBuffer { } *semanticMap;

+ (id)new;

- (id)_init;
- (id)init;
- (void)dealloc;
- (id)initWithMask:(struct __CVBuffer { } *)a0;

@end
