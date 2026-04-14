@class NSString, NSData;

@interface FSFFeatureStoreBiomeEvent : NSObject <BMStoreData> {
    void /* function */ interactionId;
    void /* function */ featureData;
    void /* unknown type, empty encoding */ compressionPolicy;
}

@property (nonatomic, readonly) NSString *interactionId;
@property (nonatomic, readonly) NSData *featureData;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithInteractionId:(id)a0 featureData:(id)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3;

@end
