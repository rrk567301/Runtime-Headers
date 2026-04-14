@interface FrameworksAnalyticsPackager : NSObject

+ (id)sharedPackager;

- (id)init;
- (void)packageAndSendToBTD:(id)a0;
- (void)sendFirmwareUpdateSuccessResult;

@end
