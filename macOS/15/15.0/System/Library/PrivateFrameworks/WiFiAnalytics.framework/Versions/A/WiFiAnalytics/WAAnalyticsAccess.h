@class AnalyticsStoreMOContext, NSPersistentStoreCoordinator, AnalyticsStoreMOHandler, NSError, NSManagedObjectContext;

@interface WAAnalyticsAccess : NSObject <NSCopying> {
    BOOL readOnly;
}

@property (retain, nonatomic) NSError *persistentStoreError;
@property (retain, nonatomic) AnalyticsStoreMOHandler *moHandler;
@property (nonatomic) unsigned long long options;
@property (readonly, retain, nonatomic) NSManagedObjectContext *mainObjectContext;
@property (readonly, retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, retain, nonatomic) AnalyticsStoreMOContext *storeMOContext;

+ (void)initialize;
+ (id)accessWithOptions:(unsigned long long)a0;
+ (id)sharedWAAnalyticsAccess;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (void)reset;
- (BOOL)save;

@end
