@class NSMutableDictionary;

@interface LAInstanceIDGenerator : NSObject {
    NSMutableDictionary *_currentIDs;
}

@property (class, readonly) LAInstanceIDGenerator *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)nextInstanceIDInDomain:(id)a0;

@end
