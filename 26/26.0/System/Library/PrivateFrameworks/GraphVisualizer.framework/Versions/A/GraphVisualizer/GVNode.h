@interface GVNode : NSObject

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double w;
@property (nonatomic) double h;
@property (nonatomic) double cx;
@property (nonatomic) double cy;
@property (nonatomic) long long rank;
@property (nonatomic) long long index;
@property (weak, nonatomic) GVNode *prev;
@property (weak, nonatomic) GVNode *next;
@property (nonatomic) unsigned long long inPriority;
@property (nonatomic) unsigned long long outPriority;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } origin;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) struct CGSize { double x0; double x1; } size;

- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)description;

@end
