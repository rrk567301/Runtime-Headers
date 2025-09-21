@class NSString;

@interface CellOutrankHandler : NSObject <StateWatcherDelegate, WiFiShimDelegate, CoreTelephonyShimDelegate, ConfigurableObjectProtocol>

@property (nonatomic) char systemForeground;
@property (nonatomic) unsigned int activationIdentifier;
@property (nonatomic) char cellOutranksWiFi;
@property (nonatomic) unsigned int currentCellOutrankState;
@property (nonatomic) char cellOutrankIconControl;
@property (nonatomic) char nonIdle;
@property (nonatomic) char motionRelaySubscribed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (int)configureFromPrefs:(id)a0;
- (int)configureInstance:(id)a0;

@end
