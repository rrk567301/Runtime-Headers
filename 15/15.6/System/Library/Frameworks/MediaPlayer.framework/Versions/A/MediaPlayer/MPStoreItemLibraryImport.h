@class NSArray, MPModelObject;

@interface MPStoreItemLibraryImport : NSObject

@property (readonly, nonatomic) NSArray *importElements;
@property (readonly, nonatomic) char addToCloudLibrary;
@property (readonly, nonatomic) char addToDeviceLibraryOnly;
@property (readonly, nonatomic) MPModelObject *referralObject;

- (void).cxx_destruct;
- (id)_initWithImportElements:(id)a0 referralObject:(id)a1 usingCloudLibraryDestination:(char)a2 localLibraryDestination:(char)a3;
- (id)initUsingLocalDeviceLibraryDestinationWithImportElements:(id)a0 referralObject:(id)a1 usingLocalLibraryDestination:(char)a2 usingCloudLibraryDestination:(char)a3;
- (id)initUsingLocalDeviceLibraryDestinationWithImportElements:(id)a0 usingLocalLibraryDestination:(char)a1 usingCloudLibraryDestination:(char)a2;
- (id)initWithImportElements:(id)a0 referralObject:(id)a1 usingCloudLibraryDestination:(char)a2;
- (id)initWithImportElements:(id)a0 usingCloudLibraryDestination:(char)a1;

@end
