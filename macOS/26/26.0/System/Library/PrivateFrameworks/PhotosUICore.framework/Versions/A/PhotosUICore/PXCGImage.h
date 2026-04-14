@interface PXCGImage : NSObject

@property (readonly, nonatomic) struct CGImage { } *image;

- (id)initWithCGImage:(struct CGImage { } *)a0;
- (void)dealloc;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
