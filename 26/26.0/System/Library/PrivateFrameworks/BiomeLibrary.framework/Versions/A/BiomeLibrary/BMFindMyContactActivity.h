@class NSString, NSDate;

@interface BMFindMyContactActivity : BMEventBase <BMStoreData> {
    BOOL _hasRaw_eventTimestampBegin;
    double _raw_eventTimestampBegin;
    BOOL _hasRaw_eventTimestampEnd;
    double _raw_eventTimestampEnd;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) int actionType;
@property (readonly, nonatomic) NSDate *eventTimestampBegin;
@property (readonly, nonatomic) NSDate *eventTimestampEnd;
@property (readonly, nonatomic) NSString *bundleID;
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
- (id)initWithHandle:(id)a0 actionType:(int)a1 eventTimestampBegin:(id)a2 eventTimestampEnd:(id)a3 bundleID:(id)a4;

@end
