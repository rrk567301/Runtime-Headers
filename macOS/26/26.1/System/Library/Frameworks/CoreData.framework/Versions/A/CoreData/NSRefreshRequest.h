@class NSSet;

@interface NSRefreshRequest : NSPersistentStoreRequest {
    NSSet *_refreshObjects;
    unsigned int _refreshType;
}

- (unsigned long long)requestType;
- (void)dealloc;
- (id)init;

@end
