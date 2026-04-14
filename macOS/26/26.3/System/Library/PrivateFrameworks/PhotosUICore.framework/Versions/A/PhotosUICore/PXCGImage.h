@interface PXCGImage : NSObject

@property (readonly, nonatomic) struct CGImage { } *image;

- (id)init;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
