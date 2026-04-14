@class NSString;

@interface UniversalDrag.CoreDragItemComponent : NSObject {
    void /* function */ key;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) struct CGImage { } *image;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)init;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 image:(struct CGImage { } *)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
