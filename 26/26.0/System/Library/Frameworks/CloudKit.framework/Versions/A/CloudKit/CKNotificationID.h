@class NSString;

@interface CKNotificationID : NSObject <CKXPCSuitableString, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *notificationUUID;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)CKXPCSuitableString;
- (id)initWithNotificationUUID:(id)a0;

@end
