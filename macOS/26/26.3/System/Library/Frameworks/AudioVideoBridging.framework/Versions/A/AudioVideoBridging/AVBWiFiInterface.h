@class IOKService, IOKInterestNotification;

@interface AVBWiFiInterface : AVBInterface {
    IOKService *_wifiController;
    IOKInterestNotification *_interestNotification;
}

+ (id)allInterfaces;
+ (id)supportedInterfaces;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;
+ (id)iokitMatchingDictionaryForNetworkController;

- (id)initWithInterfaceName:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)linkSpeed;
- (id)controllerService;
- (unsigned long long)currentLinkBandwidth;
- (unsigned long long)maximumLinkBandwidth;

@end
