@class NSMutableArray, GVNode;

@interface GVEdge : NSObject

@property (retain, nonatomic) NSMutableArray *dummies;
@property (nonatomic) char reversed;
@property (readonly, nonatomic) GVNode *from;
@property (readonly, nonatomic) GVNode *to;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithFromNode:(id)a0 to:(id)a1;

@end
