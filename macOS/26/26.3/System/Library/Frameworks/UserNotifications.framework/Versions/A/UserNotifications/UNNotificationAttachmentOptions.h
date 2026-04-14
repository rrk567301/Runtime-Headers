@class NSDictionary;

@interface UNNotificationAttachmentOptions : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long displayLocation;
@property (readonly, copy, nonatomic) NSDictionary *thumbnailGeneratorUserInfo;

- (id)_initWithOptions:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithDisplayLocation:(unsigned long long)a0 thumbnailGeneratorUserInfo:(id)a1;

@end
