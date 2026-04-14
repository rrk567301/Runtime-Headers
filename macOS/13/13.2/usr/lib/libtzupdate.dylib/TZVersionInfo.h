@class NSString, NSArray, NSDictionary, NSURL, NSNumber;

@interface TZVersionInfo : NSObject

@property (retain) NSString *tzDataVersion;
@property (retain) NSString *bundleVersion;
@property (retain) NSString *icuTZSchemaVersion;
@property (retain) NSArray *changedFiles;
@property (retain) NSDictionary *alertZones;
@property (retain) NSNumber *shouldAlertAll;
@property (readonly) NSString *versionString;
@property (retain) NSURL *diskLocation;

+ (id)versionInfoFromContainerDirectory:(id)a0;
+ (id)versionInfoFromDefaultSystem;
+ (id)blankVersionInfo;
+ (id)versionInfoWithDictionary:(id)a0 isPartial:(BOOL)a1;
+ (BOOL)_verifyVersionInfoDictionary:(id)a0;
+ (id)_tzDataVersionFromZoneinfoDirectory:(id)a0 withError:(id *)a1;

- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isBlank;
- (id)_initWithVersionInfoDictionary:(id)a0 isPartial:(BOOL)a1;

@end
