@class NSString, NSUUID, NSData, NSDate;

@interface BMWritingToolsComposeAndAdjust : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
    NSData *_raw_identifier;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *prompt;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *topic;
@property (readonly, nonatomic) NSString *userInterfaceLanguage;
@property (readonly, nonatomic) NSString *userSetRegionFormat;
@property (readonly, nonatomic) int result;
@property (readonly, nonatomic) int feature;
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
- (id)initWithTimestamp:(id)a0 prompt:(id)a1 identifier:(id)a2 topic:(id)a3 userInterfaceLanguage:(id)a4 userSetRegionFormat:(id)a5 result:(int)a6 feature:(int)a7;

@end
