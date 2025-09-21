@class NSString, NSArray, NSSet, NSDate, NSDictionary, NSData;

@interface CWMutableNetworkProfile : CWNetworkProfile

@property (copy) NSDate *lastAutoJoinAt;
@property (copy) NSDate *lastManualJoinAt;
@property long long captiveNetworkStatus;
@property char captiveNetwork;
@property char wasCaptiveNetwork;
@property char temporarilyDisabled;
@property char systemMode;
@property char hiddenNetwork;
@property unsigned long long securityType;
@property char autoLogin;
@property char captiveBypass;
@property char disabled;
@property char isPasspoint;
@property (copy) NSString *domainName;
@property (copy) NSString *displayName;
@property (copy) NSArray *roamingConsortiumList;
@property (copy) NSArray *naiRealmList;
@property char isServiceProviderRoamingEnabled;
@property char possiblyHiddenNetwork;
@property (copy) NSSet *collocatedGroup;
@property (copy) NSSet *channelHistory;
@property long long roamingProfileType;
@property unsigned long long transitionDisabledFlags;
@property char standalone6G;
@property char isPersonalHotspot;
@property (copy) NSArray *bssidList;
@property long long shareMode;
@property long long userRole;
@property (copy) NSString *payloadUUID;
@property unsigned long long addedBy;
@property (copy) NSDate *addedAt;
@property (copy) NSDate *wasHiddenBefore;
@property (copy) NSDate *captiveSheetTimestamp;
@property (copy) NSDate *userPreferredOrderTimestamp;
@property (copy) NSDate *updatedAt;
@property (copy) NSDate *discoveredAt;
@property (copy) NSString *networkGroupID;
@property unsigned long long networkGroupPriority;
@property (copy) NSDictionary *userPreferredNetworkNames;
@property (copy) NSDictionary *userPreferredPasspointDomains;
@property char privacyProxyEnabled;
@property long long movingAttribute;
@property long long publicAttribute;
@property unsigned long long lowDataMode;
@property (copy) NSData *ssidData;
@property long long security;

- (void)setUserPreferredTimestamp:(id)a0 networkProfile:(id)a1;

@end
