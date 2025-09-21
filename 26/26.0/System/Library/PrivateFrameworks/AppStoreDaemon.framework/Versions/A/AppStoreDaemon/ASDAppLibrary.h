@class NSString, ASDServiceBroker;

@interface ASDAppLibrary : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (long long)launchApp:(id)a0;
+ (void)uninstallApp:(id)a0 requestUserConfirmation:(BOOL)a1 withResultHandler:(id /* block */)a2;
+ (void)launchApp:(id)a0 onPairedDevice:(id)a1 withResultHandler:(id /* block */)a2;
+ (long long)launchApp:(id)a0 onPairedDevice:(id)a1;
+ (void)launchMessagesExtensionForApp:(id)a0 withResultHandler:(id /* block */)a1;
+ (void)launchApp:(id)a0 withResultHandler:(id /* block */)a1;
+ (void)uninstallApp:(id)a0 withResultHandler:(id /* block */)a1;
+ (id)interface;
+ (long long)launchMessagesExtensionForApp:(id)a0;
+ (unsigned char)openableStatusForExecutableAtPath:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
