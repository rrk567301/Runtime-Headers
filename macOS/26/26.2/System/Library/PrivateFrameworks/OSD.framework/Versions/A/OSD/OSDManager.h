@class OSDConnectionInfo;

@interface OSDManager : NSObject <OSDUIHelperProtocol> {
    OSDConnectionInfo *_osd;
    OSDConnectionInfo *_systemBanners;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)fadeClassicImageOnDisplay:(unsigned int)a0;
- (id)remoteObjectProxyForGraphicType:(long long)a0;
- (void)showFullScreenImage:(long long)a0 onDisplayID:(unsigned int)a1 priority:(unsigned int)a2 msecToAnimate:(unsigned int)a3;
- (void)showImage:(long long)a0 onDisplayID:(unsigned int)a1 priority:(unsigned int)a2 msecUntilFade:(unsigned int)a3;
- (void)showImage:(long long)a0 onDisplayID:(unsigned int)a1 priority:(unsigned int)a2 msecUntilFade:(unsigned int)a3 filledChiclets:(unsigned int)a4 totalChiclets:(unsigned int)a5 locked:(BOOL)a6;
- (void)showImage:(long long)a0 onDisplayID:(unsigned int)a1 priority:(unsigned int)a2 msecUntilFade:(unsigned int)a3 withText:(id)a4;
- (void)showImageAtPath:(id)a0 onDisplayID:(unsigned int)a1 priority:(unsigned int)a2 msecUntilFade:(unsigned int)a3 withText:(id)a4;

@end
