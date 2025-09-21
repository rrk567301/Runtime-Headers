@class NSString;

@interface AKFollowUpFactoryImpl : NSObject <AKFollowUpItemFactory>

@property (copy, nonatomic) NSString *extensionIdentifier;
@property (copy, nonatomic) NSString *representingBundlePath;
@property (copy, nonatomic) NSString *bundleIconName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)IsFollowUpItemNotificationForced:(id)a0;
- (id)_actionFromInfo:(id)a0 pushMessageInfo:(id)a1;
- (id)_actionsFromPayload:(id)a0 pushMessageInfo:(id)a1;
- (id)_clearAction;
- (id)_extensionIDFromPayload:(id)a0;
- (id)_itemFromPayload:(id)a0 pushMessageInfo:(id)a1 withAltDSID:(id)a2;
- (char)_itemShouldSuppressNotification:(id)a0;
- (id)_notificationFromPayload:(id)a0 pushMessageInfo:(id)a1;
- (id)actionWithTitle:(id)a0 andActionKey:(id)a1;
- (id)itemIdentifiersRequiringNotificationClearFromPayload:(id)a0;
- (id)itemsForAltDSID:(id)a0 pushMessageInfo:(id)a1 fromIDMSPayload:(id)a2;

@end
