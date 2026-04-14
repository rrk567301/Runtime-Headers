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

+ (id)identifierForRequestorEmail:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)_propertyNames;
+ (id)stringForVerificationState:(long long)a0;
+ (long long)verificationStateFromString:(id)a0;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithCoder:(id)a0;
- (id)initWithEmail:(id)a0;
- (void)mergeWithObject:(id)a0;

@end
