@class NSDictionary;

@interface IMUrlToTransferMap : NSObject <IMAttributableContent, NSCopying> {
    void /* function */ urlToTransferGuids;
}

@property (nonatomic, readonly) NSDictionary *urlToTransferGuids;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUrlToTransferGuids:(id)a0;
- (id)relayDictionaryRepresentation;
- (id)transferGuidFromUrl:(id)a0;

@end
