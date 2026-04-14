@class NSDictionary;

@interface IMUrlToTransferMap : NSObject <IMAttributableContent, NSCopying> {
    void /* function */ urlToTransferGuids;
}

@property (nonatomic, readonly) NSDictionary *urlToTransferGuids;

- (id)copyWithZone:(void *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithUrlToTransferGuids:(id)a0;
- (id)relayDictionaryRepresentation;
- (id)transferGuidFromUrl:(id)a0;

@end
