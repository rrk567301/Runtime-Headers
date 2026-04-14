@class ViewService, ViewHost, NSString;

@interface HostAndService : NSObject

@property ViewHost *viewHost;
@property ViewService *viewService;
@property (retain) NSString *remoteViewIdentifier;
@property (readonly) unsigned int keyFocusTheftID;

+ (void)determineKeyFocus:(id)a0 because:(const char *)a1;

- (void)dealloc;
- (id)description;
- (void)releaseKeyFocus:(const char *)a0;
- (void)stealKeyFocus:(const char *)a0 wantsAggressiveKeyboardFocusTheftCancellation:(BOOL)a1;
- (BOOL)stoleKeyFocus;
- (BOOL)lostKeyFocus;
- (BOOL)event:(struct __CGEvent { } *)a0 isCloseEnoughTo:(struct __CGEvent { } *)a1;
- (struct __CGEvent { } *)eventInProgress:(id)a0;

@end
