@class NSNumber, SLSharingSession;

@interface SLWindowMirroringContext : NSObject {
    SLSharingSession *_session;
}

@property (readonly) NSNumber *displayID;

- (void)dealloc;
- (id)filter;
- (BOOL)mirrorTo:(id)a0 withFilter:(id)a1 showCursor:(BOOL)a2;
- (BOOL)extend;
- (id)initWithDisplay:(id)a0;
- (BOOL)mirrorTo:(id)a0;

@end
