@class NSArray;

@interface _CLLSLHeadingEstimation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int status;
@property (copy, nonatomic) NSArray *headings;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;

@end
