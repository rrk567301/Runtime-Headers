@class NSSet;

@interface NSRefreshRequest : NSPersistentStoreRequest {
    NSSet *_refreshObjects;
    unsigned int _refreshType;
}

- (id)init;
- (unsigned long long)requestType;
- (void)dealloc;

@end
