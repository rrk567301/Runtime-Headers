@class BMSiriPrivateLearningSELFEventStream, BMSource;

@interface SiriAnalyticsPrivateLearningStorageProvider : NSObject {
    BMSiriPrivateLearningSELFEventStream *_stream;
    BMSource *_source;
}

- (void).cxx_destruct;
- (void)storeOrderedAnyEvent:(id)a0;
- (id)init;
- (BOOL)isAnyEventTypeAllowed:(int)a0;

@end
