@class NSUUID, NSString, NSData;

@interface BMGeneratedImageImageGeneration : BMEventBase <BMStoreData> {
    NSData *_raw_promptIdentifier;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *promptIdentifier;
@property (readonly, nonatomic) int imageIdentifier;
@property (nonatomic) BOOL hasImageIdentifier;
@property (readonly, nonatomic) NSString *promptAfterRewrite;
@property (readonly, nonatomic) NSString *promptAfterAssembly;
@property (readonly, nonatomic) NSData *imageForPersonalization;
@property (readonly, nonatomic) NSString *featureModel;
@property (readonly, nonatomic) NSData *generatedImage;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)initWithPromptIdentifier:(id)a0 imageIdentifier:(id)a1 promptAfterRewrite:(id)a2 promptAfterAssembly:(id)a3 imageForPersonalization:(id)a4 featureModel:(id)a5 generatedImage:(id)a6;

@end
