@class NSUUID;

@interface TUCallTranslationRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *callUUID;
@property (retain, nonatomic) NSUUID *UUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCall:(id)a0;
- (BOOL)isEqualToTUCallTranslationRequest:(id)a0;

@end
