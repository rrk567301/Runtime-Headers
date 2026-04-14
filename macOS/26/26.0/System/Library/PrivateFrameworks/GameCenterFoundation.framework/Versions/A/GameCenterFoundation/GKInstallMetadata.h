@class NSString, NSData, NSDate;

@interface GKInstallMetadata : GKInternalRepresentation

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, copy, nonatomic) NSString *bundleShortVersion;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSDate *estimatedInstallDate;
@property (readonly, nonatomic) BOOL supportsGameController;
@property (readonly, nonatomic) BOOL isArcade;
@property (readonly, nonatomic) long long platform;
@property (readonly, nonatomic) long long metadataEligibility;
@property (readonly, nonatomic) long long applicationType;
@property (readonly, nonatomic) BOOL isBeta;
@property (readonly, nonatomic) NSData *persistentRecordID;
@property (readonly, nonatomic) BOOL isHidden;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 adamID:(id)a1 bundleShortVersion:(id)a2 name:(id)a3 shortName:(id)a4 estimatedInstallDate:(id)a5 supportsGameController:(BOOL)a6 isArcade:(BOOL)a7 platform:(long long)a8 isHidden:(BOOL)a9 metadataEligibility:(long long)a10 applicationType:(long long)a11 isBeta:(BOOL)a12 persistentRecordID:(id)a13;

@end
