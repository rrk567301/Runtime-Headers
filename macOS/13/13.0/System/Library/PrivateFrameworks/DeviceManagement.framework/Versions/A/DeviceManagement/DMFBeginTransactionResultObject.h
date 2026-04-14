@class NSUUID;

@interface DMFBeginTransactionResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;

@end
