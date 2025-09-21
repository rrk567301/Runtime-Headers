@class BMSafariBrowsingAssistantVisualComponent, BMSafariBrowsingAssistantVisualComponentInteractionInfo, NSData, NSString;

@interface BMSafariBrowsingAssistantUserInteractionDetected : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSData *webpageViewIdentifier;
@property (readonly, nonatomic) BMSafariBrowsingAssistantVisualComponent *visualComponent;
@property (readonly, nonatomic) int userInteractionType;
@property (readonly, nonatomic) BMSafariBrowsingAssistantVisualComponentInteractionInfo *visualComponentInteractionInfo;
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
- (id)initWithWebpageViewIdentifier:(id)a0 visualComponent:(id)a1 userInteractionType:(int)a2 visualComponentInteractionInfo:(id)a3;
- (id)initByReadFrom:(id)a0;

@end
