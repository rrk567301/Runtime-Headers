@class BMMessagesSearchEventSectionAttribute, NSString, BMMessagesSearchEventResultAttribute, BMMessagesSearchEventPageAttribute;

@interface BMMessagesSearchEventVisualComponent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int componentType;
@property (readonly, nonatomic) BMMessagesSearchEventResultAttribute *resultAttribute;
@property (readonly, nonatomic) BMMessagesSearchEventSectionAttribute *sectionAttribute;
@property (readonly, nonatomic) BMMessagesSearchEventPageAttribute *pageAttribute;
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
- (id)initWithComponentType:(int)a0 resultAttribute:(id)a1 sectionAttribute:(id)a2 pageAttribute:(id)a3;

@end
