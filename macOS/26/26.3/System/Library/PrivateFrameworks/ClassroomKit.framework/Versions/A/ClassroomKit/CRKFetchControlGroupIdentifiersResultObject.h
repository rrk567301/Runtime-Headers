@class NSArray;

@interface CRKFetchControlGroupIdentifiersResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *groupIdentifiers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithGroupIdentifiers:(id)a0;

@end
