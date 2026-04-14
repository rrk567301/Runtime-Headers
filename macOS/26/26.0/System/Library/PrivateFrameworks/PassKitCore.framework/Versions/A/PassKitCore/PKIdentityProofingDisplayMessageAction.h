@class NSString, NSURL;

@interface PKIdentityProofingDisplayMessageAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) NSURL *actionURL;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToMessage:(id)a0;
- (id)initWithTitle:(id)a0 actionType:(long long)a1 actionURL:(id)a2;

@end
