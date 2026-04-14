@class NSArray;

@interface DMFFetchControlGroupIdentifiersResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *groupIdentifiers;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithGroupIdentifiers:(id)a0;

@end
