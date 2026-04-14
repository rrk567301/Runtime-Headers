@interface PXCGImage : NSObject

@property (readonly, nonatomic) struct CGImage { } *image;

- (id)initWithCGImage:(struct CGImage { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)dealloc;

@end
