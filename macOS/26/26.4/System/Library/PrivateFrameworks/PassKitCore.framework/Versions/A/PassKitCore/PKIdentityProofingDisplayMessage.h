@class NSString, NSArray;

@interface PKIdentityProofingDisplayMessage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSArray *actions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToMessage:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 actions:(id)a2;
- (id)initWithTitle:(id)a0 message:(id)a1 primaryButtonTitle:(id)a2 retryableError:(BOOL)a3;

@end
