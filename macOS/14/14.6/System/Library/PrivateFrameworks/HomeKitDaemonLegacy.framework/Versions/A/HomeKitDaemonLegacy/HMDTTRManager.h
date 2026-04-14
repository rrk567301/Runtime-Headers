@class NSString;

@interface HMDTTRManager : NSObject <HMMRadarInitiating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (id)initWithDialog:(id)a0 dataStore:(id)a1 dateFactory:(id /* block */)a2;
- (void)requestRadarWithDisplayReason:(id)a0 radarTitle:(id)a1;
- (void)requestRadarWithDisplayReason:(id)a0 radarTitle:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(long long)a4;
- (void)requestRadarWithDisplayReason:(id)a0 radarTitle:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(long long)a4 attachments:(id)a5;
- (void)requestRadarWithDisplayReason:(id)a0 radarTitle:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(long long)a4 attachments:(id)a5 waitForResponse:(BOOL)a6;
- (void)requestRadarWithMessage:(id)a0 radarTitle:(id)a1;
- (void)requestRadarWithMessage:(id)a0 radarTitle:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(id)a4;
- (void)requestRadarWithMessage:(id)a0 radarTitle:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(id)a4 waitForResponse:(BOOL)a5;
- (void)requestRadarWithMessage:(id)a0 radarTitle:(id)a1 waitForResponse:(BOOL)a2;

@end
