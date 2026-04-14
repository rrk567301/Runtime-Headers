@class NSSet, NSURL, NSString;

@interface CHSynthesisStyleInventoryStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasAllDigits;
@property (readonly, nonatomic) long long styleSampleCount;
@property (readonly, nonatomic) long long samplesWithoutStylePredictionCount;
@property (readonly, nonatomic) NSSet *characterCoverage;
@property (readonly, nonatomic) NSURL *inventoryStorageURL;
@property (readonly, nonatomic) NSString *inventoryRelativePath;
@property (readonly, nonatomic) BOOL isPersonalizationAvailable;
@property (readonly, nonatomic) long long personalizedSynthesisModelState;
@property (readonly, nonatomic) NSString *personalizedSynthesisModelVersion;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsPersonalizationAvailable:(BOOL)a0 personalizedSynthesisModelState:(long long)a1 personalizedSynthesisModelVersion:(id)a2;
- (id)initWithIsPersonalizationAvailable:(BOOL)a0 personalizedSynthesisModelState:(long long)a1 personalizedSynthesisModelVersion:(id)a2 hasAllDigits:(BOOL)a3 styleSampleCount:(long long)a4 samplesWithoutStylePredictionCount:(long long)a5 characterCoverage:(id)a6 inventoryStorageURL:(id)a7 inventoryRelativePath:(id)a8;

@end
