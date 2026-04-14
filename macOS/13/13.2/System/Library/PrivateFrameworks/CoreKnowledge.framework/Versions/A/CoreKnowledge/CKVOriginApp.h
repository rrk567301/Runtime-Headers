@class NSString;

@interface CKVOriginApp : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, copy) CKVOriginApp *Messages;
@property (class, readonly, copy) CKVOriginApp *Photos;
@property (class, readonly, copy) CKVOriginApp *Shortcuts;
@property (class, readonly, copy) CKVOriginApp *Contacts;
@property (class, readonly, copy) CKVOriginApp *Applications;
@property (class, readonly, copy) CKVOriginApp *HomeKit;
@property (class, readonly, copy) CKVOriginApp *MediaPlayer;
@property (class, readonly, copy) CKVOriginApp *Keyboard;
@property (class, readonly, copy) CKVOriginApp *CoreRoutine;
@property (class, readonly, copy) CKVOriginApp *Portrait;
@property (class, readonly, copy) CKVOriginApp *Calendar;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *universalAppId;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppId:(id)a0;
- (BOOL)isEqualToApp:(id)a0;
- (BOOL)isKnownApp;

@end
