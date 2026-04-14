@class NSObject;
@protocol OS_dispatch_queue;

@interface BRCTapToRadarManager : NSObject {
    NSObject<OS_dispatch_queue> *_executionQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_getAttachmentsForExtension:(id)a0 attachments:(id)a1 waitGroup:(id)a2;
- (BOOL)_hasTapToRadarOSX;
- (void)_launchRadarURLWithAttributes:(id)a0;
- (void)_launchTapToRadar;
- (void)_notifyUserAboutRadarURLWithAttributes:(id)a0;
- (void)_notifyUserAboutTapToRadar;
- (id)_radarOptionsToURLAttributesString:(id)a0 description:(id)a1 componentName:(id)a2 componentVersion:(id)a3 keywords:(id)a4 attachments:(id)a5;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(long long)a4 keywords:(id)a5 attachments:(id)a6 sendFullLog:(BOOL)a7 displayReason:(id)a8;
- (void)requestTapToRadarWithTitle:(id)a0 description:(id)a1 keywords:(id)a2 attachments:(id)a3 sendFullLog:(BOOL)a4 displayReason:(id)a5;

@end
