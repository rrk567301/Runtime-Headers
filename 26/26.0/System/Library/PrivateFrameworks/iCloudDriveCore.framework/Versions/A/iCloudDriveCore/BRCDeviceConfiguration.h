@class NSDictionary, BRCAccountFacade;

@interface BRCDeviceConfiguration : NSObject {
    NSDictionary *_configuration;
    BRCAccountFacade *_accountFacade;
}

@property (readonly, nonatomic, getter=getConfiguration) NSDictionary *configuration;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isTesting;
- (BOOL)_isIsSycBubble;
- (BOOL)_isSharedIPad:(id)a0;
- (BOOL)_primeMMCSCacheWithFacade:(id)a0;
- (id)getDeviceConfigurationString;
- (id)initWithAccountFacade:(id)a0;

@end
