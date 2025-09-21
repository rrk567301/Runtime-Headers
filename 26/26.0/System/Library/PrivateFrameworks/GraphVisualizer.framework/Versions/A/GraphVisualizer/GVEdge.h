@class GVNode;

@interface GVEdge : NSObject

@property (nonatomic) BOOL reversed;
@property (nonatomic) unsigned int redundancy;
@property (nonatomic) unsigned int redundancyMax;
@property (readonly, nonatomic) GVNode *from;
@property (readonly, nonatomic) GVNode *to;

- (id)description;
- (void)reverse;
- (id)initWithFromNode:(id)a0 to:(id)a1;
- (id)initWithFromNode:(id)a0 to:(id)a1 reversed:(BOOL)a2;
- (void)unreverse;

@end
