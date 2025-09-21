@class Protocol, NSString, _TtC16NetworkExtension41NEExtensionBaseProviderHostExportedObject, OS_dispatch_queue;
@protocol NEExtensionBaseHostDelegate;

@interface NEExtensionBaseProviderHost : NSObject {
    void /* function */ extensionPointName;
    void /* function */ extensionBundleIdentifier;
    void /* unknown type, empty encoding */ appExtensionProcess;
    void /* unknown type, empty encoding */ appExtensionMonitor;
    void /* unknown type, empty encoding */ xpcConnection;
}

@property (nonatomic, retain) OS_dispatch_queue *extensionQueue;
@property (nonatomic, copy) NSString *extensionPointName;
@property (nonatomic, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, retain) Protocol *extensionXPCProtocol;
@property (nonatomic, retain) Protocol *extensionHostXPCProtocol;
@property (nonatomic, retain) id<NEExtensionBaseHostDelegate> extensionDelegate;
@property (nonatomic, retain) _TtC16NetworkExtension41NEExtensionBaseProviderHostExportedObject *extensionExportedObject;

- (void)setDelegate:(id)a0;
- (void)sleepWithCompletion:(void (^)(BOOL))a0;
- (id)init;
- (void)setQueue:(id)a0;
- (void).cxx_destruct;
- (id)getExtensionConnection;
- (void)setupWithCompletion:(void (^)(BOOL))a0;
- (void)wakeWithCompletion:(void (^)(BOOL))a0;

@end
