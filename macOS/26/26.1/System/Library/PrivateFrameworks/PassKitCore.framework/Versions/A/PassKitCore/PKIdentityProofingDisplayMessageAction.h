@class NSString, NSURL;

@interface PKIdentityProofingDisplayMessageAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) NSURL *actionURL;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToMessage:(id)a0;
- (id)initWithTitle:(id)a0 actionType:(long long)a1 actionURL:(id)a2;

@end
