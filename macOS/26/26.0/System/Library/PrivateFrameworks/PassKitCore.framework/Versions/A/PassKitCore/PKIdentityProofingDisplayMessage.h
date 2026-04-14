@class NSString, NSArray;

@interface PKIdentityProofingDisplayMessage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSArray *actions;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToMessage:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 actions:(id)a2;
- (id)initWithTitle:(id)a0 message:(id)a1 primaryButtonTitle:(id)a2 retryableError:(BOOL)a3;

@end
