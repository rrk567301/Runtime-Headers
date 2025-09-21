@interface _EARPhoneticMatchBuilder : NSObject

@property (readonly, nonatomic) struct shared_ptr<quasar::TextTokenizer> { struct TextTokenizer *__ptr_; struct __shared_weak_count *__cntrl_; } tokenizer;
@property (readonly, nonatomic) struct shared_ptr<quasar::PMBuilder> { struct PMBuilder *__ptr_; struct __shared_weak_count *__cntrl_; } pmBuilder;

+ (char)writePlaceholderFstToPath:(id)a0;
+ (char)writePlaceholderSymbolsToPath:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (char)buildAlignedLFst;
- (char)buildGFsts;
- (char)buildLFst;
- (char)combineFsts;
- (char)composeLGFsts;
- (id)initWithModelRoot:(id)a0 jsonConfigFile:(id)a1 dataFeeds:(id)a2;
- (id)initWithModelRoot:(id)a0 jsonConfigFile:(id)a1 dataFeedsFile:(id)a2;
- (id)initWithNcsRoot:(id)a0 jsonConfigFile:(id)a1 dataFeeds:(id)a2;
- (id)initWithNcsRoot:(id)a0 jsonConfigFile:(id)a1 dataFeedsFile:(id)a2;
- (id)lFstName;
- (id)lgFstName;
- (id)osymsName;
- (char)supportPhoneticMatchBuilding;
- (char)writeAlignedLFstToPath:(id)a0;
- (char)writeGFstsToDirectory:(id)a0;
- (char)writeISymsToPath:(id)a0 asText:(char)a1;
- (char)writeIndividualLGFstsToDirectory:(id)a0;
- (char)writeLFstToPath:(id)a0;
- (char)writeLGFstToPath:(id)a0;
- (char)writeMetadataToPath:(id)a0;
- (char)writeOSymsToPath:(id)a0 asText:(char)a1 quasarise:(char)a2;

@end
