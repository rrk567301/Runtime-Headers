@class NSArray, NSString, BMAppIntentInvocationStaticDeferredLocalizedString;

@interface BMAppIntentInvocationActionOutputConfirmationActionName : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) BOOL destructive;
@property (nonatomic) BOOL hasDestructive;
@property (readonly, nonatomic) BMAppIntentInvocationStaticDeferredLocalizedString *acceptLabel;
@property (readonly, nonatomic) NSArray *acceptAlternatives;
@property (readonly, nonatomic) BMAppIntentInvocationStaticDeferredLocalizedString *denyLabel;
@property (readonly, nonatomic) NSArray *denyAlternatives;
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
- (id)initWithType:(int)a0 destructive:(id)a1 acceptLabel:(id)a2 acceptAlternatives:(id)a3 denyLabel:(id)a4 denyAlternatives:(id)a5;
- (id)_acceptAlternativesJSONArray;
- (id)_denyAlternativesJSONArray;

@end
