@class NSString, NSManagedObjectContext, NSPersistentContainer;
@protocol HMMRadarInitiating;

@interface HMMCoreDataCounterStorage : NSObject {
    long long _currentContextToken;
    NSManagedObjectContext *_currentContext;
    long long _persistentContainerToken;
    NSPersistentContainer *_persistentContainer;
    id<HMMRadarInitiating> _radarInitiator;
}

@property (readonly, nonatomic) NSString *dataModelName;
@property (readonly, nonatomic) NSString *path;

- (void).cxx_destruct;
- (id)currentContext;
- (void)save;
- (id)persistentContainer;
- (void)executeWithManagedObjectContext:(id /* block */)a0;
- (void)executeWithManagedObjectContextAndWait:(id /* block */)a0;
- (id)initWithModelName:(id)a0 atPath:(id)a1 radarInitiator:(id)a2;

@end
