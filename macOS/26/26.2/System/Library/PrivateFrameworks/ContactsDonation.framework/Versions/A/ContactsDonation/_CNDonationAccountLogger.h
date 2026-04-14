@class NSString, NSObject;
@protocol OS_os_log, CNDonationValueVisitor;

@interface _CNDonationAccountLogger : NSObject <CNDonationAccountLogger>

@property (readonly) NSObject<OS_os_log> *log_t;
@property (readonly) id<CNDonationValueVisitor> valueLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountRemoved:(id)a0;
- (void)pluginLoaded;
- (void)removalFailedWithError:(id)a0;
- (void)donating:(id)a0;
- (void)accountsDidNotChange;
- (void).cxx_destruct;
- (void)donationFailedWithError:(id)a0;
- (void)accountChanged:(id)a0;
- (void)accountAdded:(id)a0;
- (void)pluginUnloaded;
- (id)init;
- (void)removing:(id)a0;

@end
