@class NSString;

@interface BMMailSearchUIEventResultAttribute : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long resultPositionIndex;
@property (nonatomic) BOOL hasResultPositionIndex;
@property (readonly, nonatomic) NSString *resultId;
@property (readonly, nonatomic) int category;
@property (readonly, nonatomic) int subtype;
@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) BOOL isPrimary;
@property (nonatomic) BOOL hasIsPrimary;
@property (readonly, nonatomic) BOOL isHighImpact;
@property (nonatomic) BOOL hasIsHighImpact;
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
- (id)initWithResultPositionIndex:(id)a0 resultId:(id)a1 category:(int)a2 subtype:(int)a3 state:(int)a4 isPrimary:(id)a5 isHighImpact:(id)a6;

@end
