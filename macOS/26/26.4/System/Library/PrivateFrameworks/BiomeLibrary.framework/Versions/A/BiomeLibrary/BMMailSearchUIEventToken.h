@class NSString;

@interface BMMailSearchUIEventToken : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long wordCount;
@property (nonatomic) BOOL hasWordCount;
@property (readonly, nonatomic) unsigned long long charCount;
@property (nonatomic) BOOL hasCharCount;
@property (readonly, nonatomic) int queryComponent;
@property (readonly, nonatomic) int mailScope;
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
- (void)writeTo:(id)a0;
- (id)initWithWordCount:(id)a0 charCount:(id)a1 queryComponent:(int)a2 mailScope:(int)a3;

@end
