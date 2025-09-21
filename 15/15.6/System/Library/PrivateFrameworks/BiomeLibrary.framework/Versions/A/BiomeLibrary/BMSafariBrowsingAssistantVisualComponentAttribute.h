@class NSArray, NSString;

@interface BMSafariBrowsingAssistantVisualComponentAttribute : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int componentType;
@property (readonly, nonatomic) int cardType;
@property (readonly, nonatomic) int entityType;
@property (readonly, nonatomic) int readerViewSectionType;
@property (readonly, nonatomic) NSArray *sparkleTrigger;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithComponentType:(int)a0 cardType:(int)a1 entityType:(int)a2 readerViewSectionType:(int)a3;
- (id)initByReadFrom:(id)a0;
- (id)_sparkleTriggerJSONArray;
- (id)initWithComponentType:(int)a0 cardType:(int)a1 entityType:(int)a2 readerViewSectionType:(int)a3 sparkleTrigger:(id)a4;

@end
