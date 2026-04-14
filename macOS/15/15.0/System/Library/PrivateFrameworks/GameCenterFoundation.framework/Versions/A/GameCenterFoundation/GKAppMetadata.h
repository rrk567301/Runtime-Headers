@class NSString, NSArray, NSDate, GKAppMetadataArtwork;

@interface GKAppMetadata : GKInternalRepresentation

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, nonatomic) GKAppMetadataArtwork *artwork;
@property (readonly, nonatomic) BOOL supportsArcade;
@property (readonly, nonatomic) BOOL supportsGameController;
@property (readonly, nonatomic) NSArray *deviceFamilies;
@property (readonly, nonatomic) NSDate *latestVersionReleaseDate;
@property (readonly, copy, nonatomic) NSString *genreDisplayName;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 adamID:(id)a1 name:(id)a2 shortName:(id)a3 artwork:(id)a4 supportsArcade:(BOOL)a5 supportsGameController:(BOOL)a6 deviceFamilies:(id)a7 latestVersionReleaseDate:(id)a8 genreDisplayName:(id)a9;

@end
