@class _PASLock, BMStoreConfig;

@interface ATXUniversalBiomeUIStream : NSObject {
    BMStoreConfig *_storeConfig;
    _PASLock *_lock;
}

- (id)deprecatedGenericEventPublisherFromStartTime:(double)a0;
- (id)initWithStoreConfig:(id)a0;
- (id)_validUIStreamConsumerSubTypes;
- (id)_innerStreamForConsumerSubType:(unsigned char)a0;
- (id)_innerStreamForStreamId:(id)a0;
- (void).cxx_destruct;
- (void)donateGenericUIEvent:(id)a0;
- (id)_streamIdForConsumerSubType:(unsigned char)a0;
- (id)init;
- (id)genericEventPublisherFromStartTime:(double)a0;
- (id)genericEventPublisherFromStartTime:(double)a0 consumerSubType:(unsigned char)a1;
- (id)streamIdentifiers;

@end
