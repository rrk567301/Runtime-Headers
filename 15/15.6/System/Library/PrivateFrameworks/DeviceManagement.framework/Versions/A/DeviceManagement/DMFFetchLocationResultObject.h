@class CLLocation;

@interface DMFFetchLocationResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) CLLocation *location;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocation:(id)a0;

@end
