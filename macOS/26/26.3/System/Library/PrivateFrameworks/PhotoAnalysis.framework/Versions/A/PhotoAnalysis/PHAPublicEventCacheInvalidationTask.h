@interface PHAPublicEventCacheInvalidationTask : NSObject {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ shouldRecordCompletion;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ periodicity;
    void /* unknown type, empty encoding */ priority;
    void /* unknown type, empty encoding */ incrementalKey;
    void /* unknown type, empty encoding */ worker;
    void /* unknown type, empty encoding */ publicEventManager;
    void /* unknown type, empty encoding */ analytics;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ dateFormatter;
}

- (id)init;
- (void).cxx_destruct;

@end
