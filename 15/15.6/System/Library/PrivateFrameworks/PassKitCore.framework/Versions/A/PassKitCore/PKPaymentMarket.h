@class NSString, NSSet, NSDictionary;

@interface PKPaymentMarket : NSObject <NSSecureCoding> {
    NSDictionary *_localizedNames;
    NSString *_notificationAssetIdentifier;
    NSDictionary *_renotifyCampaigns;
    NSSet *_geoFences;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) long long type;
@property (readonly) long long classification;
@property (readonly) unsigned long long expressUpgradeHideDisableAction;
@property (readonly) double expressUpgradePromoteDuration;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *region;
@property (readonly, copy) NSString *notificationAssetIdentifier;
@property (readonly, copy) NSString *renotifyOpenLoopCampaignIdentifier;
@property (readonly, copy) NSString *renotifyDCICampaignIdentifier;
@property (readonly, copy) NSSet *supportedCredentialTypes;
@property (readonly, copy) NSSet *expressCredentialTypes;
@property (readonly, copy) NSSet *supportedTransitNetworks;
@property (readonly, copy) NSSet *expressTransitNetworks;
@property (readonly) char productsRequiredForRegion;
@property (readonly) char shouldConsiderCellularRegion;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)containsLocation:(id)a0;
- (id)_geoFenceWithDictionary:(id)a0;
- (id)analyticsReportingNameValue;
- (id)englishName;
- (id)initWithDictionary:(id)a0 forDeviceClass:(id)a1 version:(id)a2;
- (double)shortestDistanceFromLocation:(id)a0;

@end
