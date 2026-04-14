@class NSString, NSNumber;

@interface WBSFormMetadataPasswordRules : NSObject <NSSecureCoding, NSCoding, NSCopying> {
    void /* function */ passwordFieldPasswordRules;
    void /* function */ confirmPasswordFieldPasswordRules;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *passwordFieldPasswordRules;
@property (nonatomic, readonly) NSNumber *passwordFieldMinLength;
@property (nonatomic, readonly) NSNumber *passwordFieldMaxLength;
@property (nonatomic, copy) NSString *confirmPasswordFieldPasswordRules;
@property (nonatomic, readonly) NSNumber *confirmPasswordFieldMinLength;
@property (nonatomic, readonly) NSNumber *confirmPasswordFieldMaxLength;

- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPasswordFieldPasswordRules:(id)a0 passwordFieldMinLength:(id)a1 passwordFieldMaxLength:(id)a2 confirmPasswordFieldPasswordRules:(id)a3 confirmPasswordFieldMinLength:(id)a4 confirmPasswordFieldMaxLength:(id)a5;

@end
