@class NSString, NSDate;

@interface BMSiriAttentionAndInvocationSampling : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *onDeviceSampleIdentifier;
@property (readonly, nonatomic) NSString *userSamplingIdentifier;
@property (readonly, nonatomic) NSString *dataCollectionUseCase;
@property (readonly, nonatomic) NSString *deviceType;
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
- (id)initWithTimestamp:(id)a0 onDeviceSampleIdentifier:(id)a1 userSamplingIdentifier:(id)a2 dataCollectionUseCase:(id)a3 deviceType:(id)a4;

@end
