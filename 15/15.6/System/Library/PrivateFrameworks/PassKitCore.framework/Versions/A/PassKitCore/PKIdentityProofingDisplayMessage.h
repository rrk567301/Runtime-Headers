@class NSString;

@interface PKIdentityProofingDisplayMessage : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSString *primaryButtonTitle;
@property (readonly, nonatomic, getter=isRetryableError) char retryableError;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)isEqualToMessage:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 primaryButtonTitle:(id)a2 retryableError:(char)a3;

@end
