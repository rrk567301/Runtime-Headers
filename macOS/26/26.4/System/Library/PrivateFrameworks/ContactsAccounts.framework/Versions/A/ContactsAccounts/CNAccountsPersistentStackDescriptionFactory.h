@protocol CNAccountsPersistentStackDescription;

@interface CNAccountsPersistentStackDescriptionFactory : NSObject {
    void /* unknown type, empty encoding */ currentUserStackCache;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updateWatcher;
}

@property (class, nonatomic, readonly) CNAccountsPersistentStackDescriptionFactory *sharedFactory;

@property (nonatomic, readonly) id<CNAccountsPersistentStackDescription> stackForCurrentUser;
@property (nonatomic, readonly) id<CNAccountsPersistentStackDescription> inProcessStackForCurrentUser;

- (void).cxx_destruct;
- (id)init;

@end
