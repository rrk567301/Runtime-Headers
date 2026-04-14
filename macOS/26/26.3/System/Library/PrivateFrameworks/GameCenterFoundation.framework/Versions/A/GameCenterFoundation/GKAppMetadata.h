@class NSString, GKArtworkMetadata, NSSet, NSArray, NSNumber;

@interface GKAppMetadata : GKInternalRepresentation

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, copy, nonatomic) NSString *platform;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, nonatomic) GKArtworkMetadata *artwork;
@property (readonly, nonatomic) GKArtworkMetadata *customIconArtwork;
@property (readonly, nonatomic) NSNumber *supportsGameCenter;
@property (readonly, nonatomic) BOOL supportsArcade;
@property (readonly, nonatomic) NSNumber *supportsGameController;
@property (readonly, nonatomic) BOOL isEligibleForGamesApp;
@property (readonly, nonatomic) NSSet *supportedGameCenterFeatures;
@property (readonly, nonatomic) NSSet *deviceFamilies;
@property (readonly, copy, nonatomic) NSString *genreDisplayName;
@property (readonly, copy, nonatomic) NSString *rawResponse;
@property (readonly, nonatomic) NSNumber *isVerifiedForAppleSiliconMac;
@property (readonly, nonatomic) NSNumber *runsOnIntel;
@property (readonly, nonatomic) NSNumber *isIOSBinaryMacOSCompatible;
@property (readonly, copy, nonatomic) NSString *gameDisplayName;
@property (readonly, copy, nonatomic) NSString *miniGamesDeepLink;
@property (readonly, copy, nonatomic) NSNumber *isGameGenre;
@property (readonly, nonatomic) NSNumber *ageRating;
@property (readonly, nonatomic) NSArray *gkGameGenres;
@property (readonly, nonatomic) NSNumber *sizeOnDeviceInBytes;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 adamID:(id)a1 platform:(id)a2 name:(id)a3 shortName:(id)a4 artwork:(id)a5 customIconArtwork:(id)a6 supportsGameCenter:(id)a7 supportsArcade:(BOOL)a8 supportsGameController:(id)a9 isEligibleForGamesApp:(BOOL)a10 supportedGameCenterFeatures:(id)a11 deviceFamilies:(id)a12 genreDisplayName:(id)a13 rawResponse:(id)a14 isVerifiedForAppleSiliconMac:(id)a15 runsOnIntel:(id)a16 isIOSBinaryMacOSCompatible:(id)a17 gameDisplayName:(id)a18 miniGamesDeepLink:(id)a19 isGameGenre:(id)a20 ageRating:(id)a21 gkGameGenres:(id)a22 sizeOnDeviceInBytes:(id)a23;

@end
