@interface WiFiStateRelay : NetworkStateRelay

@property (nonatomic) BOOL isHotspot;
@property (nonatomic) BOOL isApplePersonalHotspot;
@property (nonatomic) BOOL isCarPlay;
@property (nonatomic) BOOL isCaptive;
@property (nonatomic) BOOL isCarrierBundle;
@property (nonatomic) BOOL isEAP;
@property (nonatomic) BOOL isOpen;

@end
