@class NSString;

@interface BMMessagesSearchEventToken : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int tokenType;
@property (readonly, nonatomic) unsigned long long wordCount;
@property (nonatomic) char hasWordCount;
@property (readonly, nonatomic) unsigned long long charCount;
@property (nonatomic) char hasCharCount;
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
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithTokenType:(int)a0 wordCount:(id)a1 charCount:(id)a2;

@end
