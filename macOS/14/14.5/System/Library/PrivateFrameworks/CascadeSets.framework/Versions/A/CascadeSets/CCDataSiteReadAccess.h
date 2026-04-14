@class CCDataSiteCache, NSMutableDictionary, NSString, CCSettings, NSObject;
@protocol OS_dispatch_queue, BMAccessAssertion;

@interface CCDataSiteReadAccess : NSObject {
    CCSettings *_settings;
    CCDataSiteCache *_dataSiteCache;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_databaseAccessCache;
    id<BMAccessAssertion> _accessAssertion;
    NSString *_useCase;
}

+ (id)defaultInstanceWithUseCase:(id)a0;

- (void).cxx_destruct;
- (id)databaseReadAccessForSet:(id)a0;
- (id)initWithRootDirectoryURL:(id)a0 settings:(id)a1 useCase:(id)a2;
- (id)uniqueDatabaseReadAccessForSet:(id)a0;
- (id)_accessForDataSite:(id)a0 usingCache:(BOOL)a1;
- (id)_databaseReadAccessForSet:(id)a0 usingCache:(BOOL)a1;
- (id)allDatabaseReadAccess:(id *)a0;
- (id)defaultDatabaseReadAccess;

@end
