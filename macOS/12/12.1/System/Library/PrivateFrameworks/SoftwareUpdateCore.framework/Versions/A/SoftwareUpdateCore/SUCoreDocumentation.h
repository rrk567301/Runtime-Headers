@class NSString, NSData, NSURL, NSNumber;

@interface SUCoreDocumentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *releaseNotesSummary;
@property (retain, nonatomic) NSData *releaseNotes;
@property (retain, nonatomic) NSData *licenseAgreement;
@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSNumber *slaVersion;
@property (retain, nonatomic) NSURL *localBundleURL;
@property (retain, nonatomic) NSURL *serverAssetURL;
@property (retain, nonatomic) NSData *serverAssetMeasurement;
@property (retain, nonatomic) NSString *serverAssetAlgorithm;
@property (nonatomic) long long serverAssetChunkSize;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *releaseNotesSummaryFileName;
@property (retain, nonatomic) NSString *releaseNotesFileName;
@property (retain, nonatomic) NSString *licenseAgreementFileName;
@property (retain, nonatomic) NSString *preferencesIconFileName;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)extendDocumentationProperties;
- (id)_extendDocumentationPropertiesWithSimulateEvent:(id)a0;
- (id)_extendDocumentationProperties;
- (id)_resourceFromBundle:(struct __CFBundle { } *)a0 forKey:(id)a1;
- (id)initWithDocumentationAsset:(id)a0;

@end
