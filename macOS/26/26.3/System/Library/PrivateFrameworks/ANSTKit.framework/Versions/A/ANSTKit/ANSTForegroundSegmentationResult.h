@interface ANSTForegroundSegmentationResult : ANSTResult

@property (readonly, nonatomic) struct __CVBuffer { } *semanticMap;

+ (id)new;

- (id)init;
- (id)_init;
- (void)dealloc;
- (id)initWithMask:(struct __CVBuffer { } *)a0;

@end
