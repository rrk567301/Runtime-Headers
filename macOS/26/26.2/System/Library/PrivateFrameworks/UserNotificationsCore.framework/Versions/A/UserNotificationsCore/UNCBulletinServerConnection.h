@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface UNCBulletinServerConnection : NSObject {
    NSXPCConnection *_bbServerConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)serverInterface;
+ (id)clientInterface;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_ensureBBServerSettingsConnection;
- (void)_resetBBServerSettingsConnection;
- (id)activeSectionIDs;
- (id)asyncServerProxyObject;
- (void)refreshAnnounceSettings;
- (void)refreshGlobalSettings;
- (void)refreshSectionInfo;
- (void)refreshSectionInfoForID:(id)a0;
- (id)serverProxyObject;

@end
