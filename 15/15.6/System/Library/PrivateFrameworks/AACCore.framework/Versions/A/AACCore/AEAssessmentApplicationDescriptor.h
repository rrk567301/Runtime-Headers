@class NSString;

@interface AEAssessmentApplicationDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) char requiresSignatureValidation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 teamIdentifier:(id)a1 requiresSignatureValidation:(char)a2;

@end
