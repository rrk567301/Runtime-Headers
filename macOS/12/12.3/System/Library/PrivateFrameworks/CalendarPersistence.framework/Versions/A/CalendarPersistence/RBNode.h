@interface RBNode : NSObject

@property (retain) RBNode *left;
@property (retain) RBNode *right;
@property (weak) RBNode *parent;
@property (retain) id key;
@property (retain) id value;
@property BOOL isBlack;

- (void).cxx_destruct;

@end
