@class NSDictionary;

@interface IMUrlToTransferMap : NSObject <IMAttributableContent, NSCopying> {
    void /* function */ urlToTransferGuids;
}

@property (nonatomic, readonly) NSDictionary *urlToTransferGuids;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUrlToTransferGuids:(id)a0;
- (id)relayDictionaryRepresentation;
- (id)transferGuidFromUrl:(id)a0;

@end
