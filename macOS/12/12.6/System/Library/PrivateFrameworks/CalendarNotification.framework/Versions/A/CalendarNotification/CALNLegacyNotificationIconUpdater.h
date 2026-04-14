@class NSString;

@interface CALNLegacyNotificationIconUpdater : NSObject <CalNotificationIconUpdater>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateIfNeededWithVersionProvider:(id)a0 iconCache:(id)a1;

@end
