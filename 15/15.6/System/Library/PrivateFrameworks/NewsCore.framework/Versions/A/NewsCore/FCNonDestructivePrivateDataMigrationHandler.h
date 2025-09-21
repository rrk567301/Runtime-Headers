@class NSArray;
@protocol FCNonDestructivePrivateDataActionProvider;

@interface FCNonDestructivePrivateDataMigrationHandler : NSObject

@property (retain, nonatomic) id<FCNonDestructivePrivateDataActionProvider> privateDataActionProvider;
@property (copy, nonatomic) NSArray *privateDataControllers;
@property (nonatomic, getter=isPrivateDataSyncingEnabled) char privateDataSyncingEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)handleMigrationWithPrivateDataDirectory:(id)a0;
- (id)initWithPrivateDataActionProvider:(id)a0 privateDataControllers:(id)a1 privateDataSyncingEnabled:(char)a2;

@end
