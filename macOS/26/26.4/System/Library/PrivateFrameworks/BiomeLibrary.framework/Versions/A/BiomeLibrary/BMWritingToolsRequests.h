@class NSString, NSDate;

@interface BMWritingToolsRequests : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) NSString *originalText;
@property (readonly, nonatomic) NSString *prompt;
@property (readonly, nonatomic) NSString *userInterfaceLanguage;
@property (readonly, nonatomic) NSString *userSetRegionFormat;
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
- (id)initWithTimestamp:(id)a0 clientBundleID:(id)a1 originalText:(id)a2 prompt:(id)a3 userInterfaceLanguage:(id)a4 userSetRegionFormat:(id)a5 feature:(int)a6 result:(int)a7 version:(id)a8;

@end
