@class VNRequestForensics, VNImageBuffer, VNRequestPerformer, NSMapTable, VNObservationsCache, VNSession;

@interface VNRequestPerformingContext : NSObject <VNImageBufferProviding> {
    unsigned long long _serialNumber;
    VNSession *_session;
    unsigned int _qosClass;
    VNRequestPerformer *_weakRequestPerformer;
    VNImageBuffer *_imageBuffer_DO_NOT_DIRECTLY_ACCESS;
    NSMapTable *_requestToObservationsCacheKeyMap;
    VNObservationsCache *_observationsCache;
    VNRequestForensics *_requestForensics;
}

@property (readonly) unsigned long long serialNumber;
@property (readonly) VNSession *session;

- (void).cxx_destruct;
- (id)imageBufferAndReturnError:(id *)a0;
- (id)initWithSession:(id)a0 requestPerformer:(id)a1 imageBuffer:(id)a2 forensics:(id)a3 observationsCache:(id)a4;
- (id)initWithSession:(id)a0 requestPerformer:(id)a1 imageBuffer:(id)a2 forensics:(id)a3 observationsCache:(id)a4 qosClass:(unsigned int)a5;
- (id)_observationsCacheKeyForRequest:(id)a0;
- (id)requestPerformerAndReturnError:(id *)a0;
- (id)requestForensics;
- (unsigned int)qosClass;
- (BOOL)cacheObservationsOfRequest:(id)a0;
- (id)cachedObservationsAcceptedByRequest:(id)a0;
- (void)recordSequencedObservationsOfRequest:(id)a0;
- (id)previousSequencedObservationsAcceptedByRequest:(id)a0;

@end
