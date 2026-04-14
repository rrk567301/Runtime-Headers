@interface PXCGImage : NSObject

@property (readonly, nonatomic) struct CGImage { } *image;

- (id)initWithCGImage:(struct CGImage { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;

@end
