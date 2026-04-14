@class BMSiriPrivateLearningSELFEventStream, BMSource;

@interface SiriAnalyticsPrivateLearningStorageProvider : NSObject {
    BMSiriPrivateLearningSELFEventStream *_stream;
    BMSource *_source;
}

- (BOOL)isAnyEventTypeAllowed:(int)a0;
- (void).cxx_destruct;
- (void)storeOrderedAnyEvent:(id)a0;
- (id)init;

@end
