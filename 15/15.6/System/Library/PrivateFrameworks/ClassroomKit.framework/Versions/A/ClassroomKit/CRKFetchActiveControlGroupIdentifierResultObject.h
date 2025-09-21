@class DMFControlGroupIdentifier;

@interface CRKFetchActiveControlGroupIdentifierResultObject : CATTaskResultObject

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
