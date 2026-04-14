@class NSString, NSArray;

@interface GKAppMetadata : GKInternalRepresentation

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *artworkURL;
@property (readonly, copy, nonatomic) NSString *genreDisplayName;
@property (readonly, nonatomic) BOOL supportsArcade;
@property (readonly, nonatomic) BOOL supportsGameController;
@property (readonly, nonatomic) NSArray *deviceFamilies;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initBundleID:(id)a0 adamID:(id)a1 name:(id)a2 shortName:(id)a3 artworkURL:(id)a4 genreDisplayName:(id)a5 supportsArcade:(BOOL)a6 supportsGameController:(BOOL)a7 deviceFamilies:(id)a8;

@end
