@class NSMutableDictionary;

@interface LACInstanceIDGenerator : NSObject {
    NSMutableDictionary *_currentIDs;
}

@property (class, readonly) LACInstanceIDGenerator *sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)nextInstanceIDInDomain:(id)a0;

@end
