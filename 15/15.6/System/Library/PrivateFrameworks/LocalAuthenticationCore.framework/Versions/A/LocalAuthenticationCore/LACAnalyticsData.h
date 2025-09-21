@class LACBiomeDialogEvent, NSString;

@interface LACAnalyticsData : NSObject <LACAnalyticsCollecting>

@property (readonly, nonatomic) LACBiomeDialogEvent *biomeDialogEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)authenticationAction:(long long)a0 failing:(char)a1;
- (void)authenticationAttemptFailedForEvent:(long long)a0;
- (void)authenticationStartedForEvent:(long long)a0;
- (void)authenticationSuccessfulForEvent:(long long)a0;
- (void)mergeAnalyticsData:(id)a0;

@end
