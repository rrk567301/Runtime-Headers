@interface TLTimelineNode : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TLTimelineNode *rightNode;
@property (retain, nonatomic) TLTimelineNode *leftNode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyLeftNodes:(BOOL)a1 copyRightNodes:(BOOL)a2;
- (BOOL)isEqualToObject:(id)a0 includingLeftNodes:(BOOL)a1 includingRightNodes:(BOOL)a2;

@end
