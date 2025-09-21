@class MLCTensor;

@interface MLCControlTreeNode : NSObject <NSCopying>

@property (readonly, nonatomic) MLCTensor *predicate;
@property (readonly, nonatomic) char needToNegate;

+ (id)controlTreeNodeWithPredicate:(id)a0 needToNegate:(char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTensor:(id)a0 needToNegate:(char)a1;

@end
