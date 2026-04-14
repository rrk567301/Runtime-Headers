@class NSMutableDictionary;

@interface CESRSignpostHelper : NSObject {
    NSMutableDictionary *_eventNameToId;
}

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)fetchAndDestroySignpostIdForEventName:(id)a0;
- (void)storeSignpostId:(unsigned long long)a0 forEventName:(id)a1;

@end
