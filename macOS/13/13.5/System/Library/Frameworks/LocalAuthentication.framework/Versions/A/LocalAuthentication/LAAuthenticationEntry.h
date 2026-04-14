@class NSUUID, NSString, LAAuthentication, NSCharacterSet;

@interface LAAuthenticationEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (weak, nonatomic) LAAuthentication *authentication;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSCharacterSet *characterSet;
@property (nonatomic) long long minCharacters;
@property (nonatomic) long long maxCharacters;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enteredString:(id)a0;

@end
