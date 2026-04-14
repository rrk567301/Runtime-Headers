@class NSString;

@interface HDPendingNotificationInstruction : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *messageIdentifier;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) NSString *sendingDeviceName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMessageIdentifier:(id)a0 categoryIdentifier:(id)a1 sendingDeviceName:(id)a2;

@end
