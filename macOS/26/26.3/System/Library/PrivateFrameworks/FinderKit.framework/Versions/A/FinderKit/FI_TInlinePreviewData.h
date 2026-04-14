@class NSDictionary;

@interface FI_TInlinePreviewData : NSObject <NSCopying> {
    short _contentRect[4];
}

@property (retain) NSDictionary *clientProperties;

- (void)setContentRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
