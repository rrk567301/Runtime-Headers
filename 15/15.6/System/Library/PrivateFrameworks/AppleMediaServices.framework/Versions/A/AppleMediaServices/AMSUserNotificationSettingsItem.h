@class NSDictionary, NSString;

@interface AMSUserNotificationSettingsItem : NSObject

@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSDictionary *updateDictionary;
@property (getter=isEnabled) char enabled;
@property (readonly) NSString *identifier;
@property char userChanged;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 dictionaryRepresentation:(id)a1;
- (id)initWithIdentifier:(id)a0 enabled:(char)a1;

@end
