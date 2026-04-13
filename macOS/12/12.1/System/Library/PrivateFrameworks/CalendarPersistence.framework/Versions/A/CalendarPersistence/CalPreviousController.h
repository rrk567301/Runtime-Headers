@class NSDictionary;

@interface CalPreviousController : NSObject {
    NSDictionary *_previousLists;
    BOOL _hasUnsavedChanges;
}

+ (void)save;
+ (id)defaultController;
+ (id)stringVersionOfType:(int)a0;
+ (id)itemWithAddress:(id)a0 attendeeType:(int)a1;
+ (id)itemWithAddress:(id)a0 displayName:(id)a1 firstName:(id)a2 lastName:(id)a3 login:(id)a4 attendeeType:(int)a5;

- (void)dealloc;
- (id)init;
- (id)filePath;
- (void)clearAll;
- (void)saveAll;
- (BOOL)checkPath:(id)a0 createIfNecessary:(BOOL)a1;
- (void)trimPrevious:(id)a0;
- (void)addItemToList:(id)a0 withKey:(id)a1;
- (id)itemsWithPrefix:(id)a0 key:(id)a1 locations:(BOOL)a2;
- (void)removeAddress:(id)a0 key:(id)a1;

@end
