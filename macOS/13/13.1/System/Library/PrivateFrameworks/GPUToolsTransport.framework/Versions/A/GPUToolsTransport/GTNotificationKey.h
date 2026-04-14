@class NSString, NSUUID;

@interface GTNotificationKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *deviceUUID;
@property (readonly, nonatomic) unsigned long long servicePort;
@property (nonatomic) unsigned long long userInfo;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 device:(id)a1 port:(unsigned long long)a2;
- (BOOL)isEqualToNotificationKey:(id)a0;

@end
