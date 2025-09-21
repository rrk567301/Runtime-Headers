@class NSString, UNNotificationIcon, UNNotificationSourceSettings;

@interface UNNotificationSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *bundlePath;
@property (readonly, copy) NSString *sourceIdentifier;
@property (readonly) BOOL isHiddenFromSettings;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) UNNotificationIcon *icon;
@property (readonly, copy) UNNotificationSourceSettings *sourceSettings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 isHidden:(BOOL)a1 displayName:(id)a2 icon:(id)a3 settings:(id)a4 bundlePath:(id)a5;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
