@class NSSet;

@interface CRKFetchActiveRestrictionUUIDsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSSet *activeRestrictionUUIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
