@interface CoreGraphicsContext : NSObject {
    CoreGraphicsContext *_next;
}

@property (class, readonly, nonatomic) CoreGraphicsContext *current;

@property (readonly, nonatomic) struct CGContext { } *CGContext;

- (id)initWithCGContext:(struct CGContext { } *)a0;
- (void)push;
- (void)pop;

@end
