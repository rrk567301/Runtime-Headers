@class PGPublicEventDisambiguator, NSObject;
@protocol OS_os_log;

@interface PGPublicEventCacher : NSObject {
    PGPublicEventDisambiguator *_disambiguator;
    NSObject<OS_os_log> *_log;
}

- (void).cxx_destruct;
- (id)executeFetchRequest:(id)a0 publicEventManager:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (id)initWithDisambiguator:(id)a0;

@end
