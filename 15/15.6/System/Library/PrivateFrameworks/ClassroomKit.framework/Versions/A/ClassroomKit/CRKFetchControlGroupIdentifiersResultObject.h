@class NSArray;

@interface CRKFetchControlGroupIdentifiersResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *groupIdentifiers;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupIdentifiers:(id)a0;

@end
