@class NSArray;

@interface PKPassAuxiliaryRegistrationRequirements : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *deviceSignatureRequirements;
@property (readonly, nonatomic) NSArray *deviceDecryptionRequirements;
@property (readonly, nonatomic) NSArray *allRequirements;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToPassAuxiliaryRegistrationRequirements:(id)a0;

@end
