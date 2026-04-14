@class NSString;

@interface BMSafariBrowsingAssistantVisualComponentInteractionInfo : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *tableOfContentsText;
@property (readonly, nonatomic) unsigned long long tableOfContentsTextIndex;
@property (nonatomic) BOOL hasTableOfContentsTextIndex;
@property (readonly, nonatomic) int hideShowButton;
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
- (id)initWithTableOfContentsText:(id)a0 tableOfContentsTextIndex:(id)a1 hideShowButton:(int)a2;

@end
