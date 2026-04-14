@class NSString;
@protocol SKADatabaseProviding;

@interface SKABaseDatabaseManager : NSObject <SKADatabaseManaging>

@property (readonly, nonatomic) id<SKADatabaseProviding> databaseProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
