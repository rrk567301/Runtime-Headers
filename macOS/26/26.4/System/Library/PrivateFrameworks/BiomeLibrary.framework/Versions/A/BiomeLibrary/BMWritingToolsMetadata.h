@class NSString, NSDate;

@interface BMWritingToolsMetadata : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) NSString *userInterfaceLanguage;
@property (readonly, nonatomic) NSString *userSetRegionFormat;
@property (readonly, nonatomic) unsigned int textWordCount;
@property (nonatomic) BOOL hasTextWordCount;
@property (readonly, nonatomic) unsigned int textCharCount;
@property (nonatomic) BOOL hasTextCharCount;
@property (readonly, nonatomic) unsigned int promptWordCount;
@property (nonatomic) BOOL hasPromptWordCount;
@property (readonly, nonatomic) unsigned int promptCharCount;
@property (nonatomic) BOOL hasPromptCharCount;
@property (readonly, nonatomic) NSString *textTopic;
@property (readonly, nonatomic) NSString *textTone;
@property (readonly, nonatomic) NSString *promptTopic;
@property (readonly, nonatomic) NSString *data;
@property (readonly, nonatomic) int feature;
@property (readonly, nonatomic) int result;
@property (readonly, nonatomic) NSString *version;
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
- (id)initWithTimestamp:(id)a0 clientBundleID:(id)a1 userInterfaceLanguage:(id)a2 userSetRegionFormat:(id)a3 textWordCount:(id)a4 textCharCount:(id)a5 promptWordCount:(id)a6 promptCharCount:(id)a7 textTopic:(id)a8 textTone:(id)a9 promptTopic:(id)a10 data:(id)a11 feature:(int)a12 result:(int)a13 version:(id)a14;

@end
