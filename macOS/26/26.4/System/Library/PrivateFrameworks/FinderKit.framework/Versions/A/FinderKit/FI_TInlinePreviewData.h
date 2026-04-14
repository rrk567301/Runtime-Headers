@class NSDictionary;

@interface FI_TInlinePreviewData : NSObject <NSCopying> {
    short _contentRect[4];
}

@property (retain) NSDictionary *clientProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (void)setContentRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
