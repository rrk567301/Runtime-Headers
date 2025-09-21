@class NSString;

@interface UNTextInputNotificationResponse : UNNotificationResponse <BSXPCCoding>

@property (readonly, copy) NSString *userText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (id)responseWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3 targetSceneIdentifier:(id)a4 userText:(id)a5;
+ (id)responseWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3 userText:(id)a4;
+ (id)responseWithNotification:(id)a0 actionIdentifier:(id)a1 userText:(id)a2;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)_initWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3 targetSceneIdentifier:(id)a4;
- (id)_initWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3 targetSceneIdentifier:(id)a4 userText:(id)a5;
- (id)initWithNotification:(id)a0 actionIdentifier:(id)a1 userText:(id)a2;

@end
