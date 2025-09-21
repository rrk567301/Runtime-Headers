@class NSString, NSDate;

@interface BMMomentsEventDataEventBundleOutlierMetadata : BMEventBase <BMStoreData> {
    char _hasRaw_updatedDate;
    double _raw_updatedDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char isSignificant;
@property (nonatomic) char hasIsSignificant;
@property (readonly, nonatomic) double outlierScore;
@property (nonatomic) char hasOutlierScore;
@property (readonly, nonatomic) NSDate *updatedDate;
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
- (id)initWithIsSignificant:(id)a0 outlierScore:(id)a1 updatedDate:(id)a2;

@end
