@class BMIntelligencePlatformMessageTermsTermCountTerm, NSString;

@interface BMIntelligencePlatformMessageTermsTermCount : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMIntelligencePlatformMessageTermsTermCountTerm *term;
@property (readonly, nonatomic) int termCount;
@property (nonatomic) BOOL hasTermCount;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)serialize;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithTerm:(id)a0 termCount:(id)a1;

@end
