@class NSArray;

@interface DMFFetchUsersResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *users;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithUsers:(id)a0;

@end
