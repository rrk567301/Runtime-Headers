@class NSString;

@interface LACAuthenticationUINotificationCenter : NSObject <LACAuthenticationUINotifying>

@property (nonatomic) struct __CFString { } *lastNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)postNotification:(struct __CFString { } *)a0;
- (BOOL)postNotificationUIDidAppear;
- (BOOL)_checkIsRedundantNotification:(struct __CFString { } *)a0;
- (void)_postDarwinNotificationWithIdentifier:(struct __CFString { } *)a0;
- (BOOL)postNotificationUIDidDisappear;

@end
