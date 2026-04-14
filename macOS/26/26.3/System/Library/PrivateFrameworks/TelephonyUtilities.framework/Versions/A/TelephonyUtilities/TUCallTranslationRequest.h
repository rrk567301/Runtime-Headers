@class NSUUID;

@interface TUCallTranslationRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *callUUID;
@property (retain, nonatomic) NSUUID *UUID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCall:(id)a0;
- (BOOL)isEqualToTUCallTranslationRequest:(id)a0;

@end
