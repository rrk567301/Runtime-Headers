@class NSArray, NSString;

@interface BMMomentsEventDataEventBundlePerson : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSArray *personRelationships;
@property (readonly, nonatomic) BOOL isMEPerson;
@property (nonatomic) BOOL hasIsMEPerson;
@property (readonly, nonatomic) double significanceScore;
@property (nonatomic) BOOL hasSignificanceScore;
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
- (id)_personRelationshipsJSONArray;
- (id)initWithPersonRelationships:(id)a0 isMEPerson:(id)a1 significanceScore:(id)a2;

@end
