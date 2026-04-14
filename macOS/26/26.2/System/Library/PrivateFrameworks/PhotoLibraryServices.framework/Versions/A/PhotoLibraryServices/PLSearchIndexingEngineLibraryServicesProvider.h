@class NSString, PLLibraryServicesManager;

@interface PLSearchIndexingEngineLibraryServicesProvider : NSObject <PLSearchIndexingEngineLibraryServicesProvider> {
    PLLibraryServicesManager *_lsm;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isUnitTesting;
- (id)redactedDescription;
- (id)pathManager;
- (long long)libraryIdentifier;
- (void).cxx_destruct;
- (id)createLogger;
- (id)initWithLSM:(id)a0;
- (id)libraryWithName:(const char *)a0;

@end
