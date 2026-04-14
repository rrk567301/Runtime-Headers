@class NSString, BMMASecureDetailEvent, BMMADownloadResultEvent;

@interface BMMobileAssetInstrumentationEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *subSystemName;
@property (readonly, nonatomic) int eventType;
@property (readonly, nonatomic) BMMADownloadResultEvent *maDownloadResult;
@property (readonly, nonatomic) BMMASecureDetailEvent *maSecureDetail;
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
- (id)initWithSubSystemName:(id)a0 eventType:(int)a1 maDownloadResult:(id)a2 maSecureDetail:(id)a3;

@end
