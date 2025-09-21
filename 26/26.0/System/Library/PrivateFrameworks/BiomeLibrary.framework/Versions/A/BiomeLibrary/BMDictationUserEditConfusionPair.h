@class NSArray, NSString;

@interface BMDictationUserEditConfusionPair : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned int index;
@property (nonatomic) BOOL hasIndex;
@property (readonly, nonatomic) NSArray *recognizedTokens;
@property (readonly, nonatomic) NSArray *correctedTokens;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_correctedTokensJSONArray;
- (id)_recognizedTokensJSONArray;
- (id)initWithIndex:(id)a0 recognizedTokens:(id)a1 correctedTokens:(id)a2;

@end
