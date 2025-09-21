@interface TLTimelineNode : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) TLTimelineNode *rightNode;
@property (retain, nonatomic) TLTimelineNode *leftNode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyLeftNodes:(char)a1 copyRightNodes:(char)a2;
- (char)isEqualToObject:(id)a0 includingLeftNodes:(char)a1 includingRightNodes:(char)a2;

@end
