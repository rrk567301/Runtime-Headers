@class NSDictionary, NSString;

@interface AMSNotificationSettingsItem : NSObject

@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *desc;
@property (getter=isEnabled) char enabled;
@property (readonly) NSString *identifier;
@property (readonly) NSString *title;
@property char userChanged;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithTitle:(id)a0 description:(id)a1 identifier:(id)a2 enabled:(char)a3;

@end
