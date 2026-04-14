@class NSString, NSArray, NSNumber;

@interface SUOSUCatalogServer : NSObject

@property (retain) NSString *name;
@property (retain) NSString *serverDescription;
@property (retain) NSString *comment;
@property (retain) NSString *catalogURL;
@property (retain) NSString *backgroundCatalogURL;
@property (retain) NSString *audienceID;
@property (retain) NSString *mobileAssetURL;
@property (retain) NSString *bridgeAudienceID;
@property (retain) NSString *profileLink;
@property (retain) NSArray *userDefaults;
@property (retain) NSArray *nvramVariables;
@property (retain) NSString *minimumBuild;
@property (retain) NSString *maximumBuild;
@property (retain) NSString *requiredDefault;
@property (retain) NSNumber *requiredGroup;
@property (retain) NSString *iconName;
@property BOOL enableOnProdFused;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInfoDictionary:(id)a0;
- (id)initWithInfoDictionaryV2:(id)a0;
- (BOOL)qualifiesForBuild;

@end
