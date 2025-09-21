@class NSString, GKArtworkMetadata, NSSet, NSArray;

@interface GKAppMetadata : GKInternalRepresentation

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, nonatomic) GKArtworkMetadata *artwork;
@property (readonly, nonatomic) char supportsGameCenter;
@property (readonly, nonatomic) char supportsArcade;
@property (readonly, nonatomic) char supportsGameController;
@property (readonly, nonatomic) NSSet *supportedGameCenterFeatures;
@property (readonly, nonatomic) NSArray *deviceFamilies;
@property (readonly, copy, nonatomic) NSString *genreDisplayName;
@property (readonly, copy, nonatomic) NSString *rawResponse;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 adamID:(id)a1 name:(id)a2 shortName:(id)a3 artwork:(id)a4 supportsGameCenter:(char)a5 supportsArcade:(char)a6 supportsGameController:(char)a7 supportedGameCenterFeatures:(id)a8 deviceFamilies:(id)a9 genreDisplayName:(id)a10 rawResponse:(id)a11;

@end
