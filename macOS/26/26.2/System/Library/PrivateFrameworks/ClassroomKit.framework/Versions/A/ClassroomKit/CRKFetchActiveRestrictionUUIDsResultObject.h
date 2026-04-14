@class NSSet;

@interface CRKFetchActiveRestrictionUUIDsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSSet *activeRestrictionUUIDs;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
