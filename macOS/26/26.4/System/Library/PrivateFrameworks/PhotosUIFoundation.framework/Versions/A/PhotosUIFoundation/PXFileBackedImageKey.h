@class NSURL;

@interface PXFileBackedImageKey : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) BOOL preferHDR;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithUrl:(id)a0 size:(struct CGSize { double x0; double x1; })a1 preferHDR:(BOOL)a2;

@end
