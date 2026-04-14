@class NSManagedObjectContext;

@interface AXSSDatabaseManager : NSObject {
    int _lockNotificationToken;
    BOOL _isScreenedLocked;
}

@property (readonly, nonatomic) BOOL canSave;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

+ (id)sharedDatabase;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)cloudObjectFromLocalObjects:(id)a0 withTable:(id)a1 andObjectID:(id)a2;
- (void)userAuthChanged;

@end
