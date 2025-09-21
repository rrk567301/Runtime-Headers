@interface PXCGImage : NSObject

@property (readonly, nonatomic) struct CGImage { } *image;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0;

@end
