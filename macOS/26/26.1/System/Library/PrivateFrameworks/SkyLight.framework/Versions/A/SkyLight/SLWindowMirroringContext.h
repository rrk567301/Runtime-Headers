@class NSNumber, NSString, SLSharingSession;

@interface SLWindowMirroringContext : NSObject {
    NSString *_sharingSessionTitle;
    SLSharingSession *_session;
}

@property (readonly) NSNumber *displayID;
@property (readonly) NSNumber *srcDisplayID;
@property (retain) NSNumber *shieldWindowID;

- (id)filter;
- (BOOL)extend;
- (id)initWithDisplay:(id)a0;
- (void)currentSession;
- (void)dealloc;
- (BOOL)mirrorTo:(id)a0 withFilter:(id)a1 showCursor:(BOOL)a2;
- (id)currentShieldWindowID;
- (BOOL)mirrorTo:(id)a0;
- (void)resetSession;
- (void)setupSession;

@end
