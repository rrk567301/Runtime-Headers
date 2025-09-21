@class NSNumber, NSString, SLSharingSession;

@interface SLWindowMirroringContext : NSObject {
    NSString *_sharingSessionTitle;
    SLSharingSession *_session;
}

@property (readonly) NSNumber *displayID;
@property (readonly) NSNumber *srcDisplayID;
@property (retain) NSNumber *shieldWindowID;

- (void)dealloc;
- (id)filter;
- (void)currentSession;
- (char)mirrorTo:(id)a0 withFilter:(id)a1 showCursor:(char)a2;
- (id)currentShieldWindowID;
- (char)extend;
- (id)initWithDisplay:(id)a0;
- (char)mirrorTo:(id)a0;
- (void)resetSession;
- (void)setupSession;

@end
