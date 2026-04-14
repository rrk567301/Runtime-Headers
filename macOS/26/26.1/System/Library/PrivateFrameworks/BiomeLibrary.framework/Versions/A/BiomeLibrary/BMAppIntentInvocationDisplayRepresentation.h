@class BMAppIntentInvocationStaticDeferredLocalizedString, NSArray, NSString, BMAppIntentInvocationImage;

@interface BMAppIntentInvocationDisplayRepresentation : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMAppIntentInvocationStaticDeferredLocalizedString *title;
@property (readonly, nonatomic) BMAppIntentInvocationStaticDeferredLocalizedString *subtitle;
@property (readonly, nonatomic) NSArray *synonyms;
@property (readonly, nonatomic) BMAppIntentInvocationImage *image;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)_synonymsJSONArray;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 synonyms:(id)a2;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 synonyms:(id)a2 image:(id)a3;

@end
