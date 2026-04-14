@class NSString, NSDictionary;

@interface CLSAdminRequestor : CLSObject {
    NSString *_verificationCode;
    NSString *_note;
}

@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSDictionary *serverRequestHeaders;
@property (copy, nonatomic) NSString *verificationCode;
@property (copy, nonatomic) NSString *note;

+ (BOOL)supportsSecureCoding;
+ (id)_propertyNames;
+ (id)stringForVerificationState:(long long)a0;
+ (id)identifierForRequestorEmail:(id)a0;
+ (long long)verificationStateFromString:(id)a0;

- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (void)reset;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEmail:(id)a0;
- (void)mergeWithObject:(id)a0;

@end
