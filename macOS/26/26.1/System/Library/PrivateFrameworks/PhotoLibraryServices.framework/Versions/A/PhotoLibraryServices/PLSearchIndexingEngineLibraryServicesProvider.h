@class NSString, PLLibraryServicesManager;

@interface PLSearchIndexingEngineLibraryServicesProvider : NSObject <PLSearchIndexingEngineLibraryServicesProvider> {
    PLLibraryServicesManager *_lsm;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isUnitTesting;
- (id)pathManager;
- (void).cxx_destruct;
- (long long)libraryIdentifier;
- (id)redactedDescription;
- (id)createLogger;
- (id)initWithLSM:(id)a0;
- (id)libraryWithName:(const char *)a0;

@end
