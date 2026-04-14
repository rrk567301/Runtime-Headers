@class PLLibraryServicesManager;

@interface PLAbstractLibraryServicesManagerService : NSObject

@property (readonly, nonatomic) PLLibraryServicesManager *libraryServicesManager;

- (void).cxx_destruct;
- (id)newShortLivedLibraryWithName:(const char *)a0;
- (id)initWithLibraryServicesManager:(id)a0;

@end
