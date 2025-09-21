@class NSString, NSDate;

@interface BMMomentsEventDataEventBundleOutlierMetadata : BMEventBase <BMStoreData> {
    BOOL _hasRaw_updatedDate;
    double _raw_updatedDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isSignificant;
@property (nonatomic) BOOL hasIsSignificant;
@property (readonly, nonatomic) double outlierScore;
@property (nonatomic) BOOL hasOutlierScore;
@property (readonly, nonatomic) NSDate *updatedDate;
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
- (id)initWithIsSignificant:(id)a0 outlierScore:(id)a1 updatedDate:(id)a2;

@end
