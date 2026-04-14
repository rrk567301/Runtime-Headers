@class NSDictionary;

@interface IMUrlToTransferMap : NSObject <IMAttributableContent, NSCopying> {
    void /* function */ urlToTransferGuids;
}

@property (nonatomic, readonly) NSDictionary *urlToTransferGuids;
@property (nonatomic, readonly) long long hash;

- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithUrlToTransferGuids:(id)a0;
- (id)relayDictionaryRepresentation;
- (id)transferGuidFromUrl:(id)a0;

@end
