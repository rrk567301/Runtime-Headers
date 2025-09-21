@class WFEnterpriseAssociationParameters;

@interface WFAssociationParameters : NSObject

@property (nonatomic, getter=isCarPlayOnly) BOOL carPlayOnly;
@property (nonatomic, getter=isInstantHotspot) BOOL instantHotspot;
@property (nonatomic) BOOL joinedUsingWiFiPasswordSharing;
@property (retain, nonatomic) WFEnterpriseAssociationParameters *enterpriseParameters;

- (void).cxx_destruct;

@end
