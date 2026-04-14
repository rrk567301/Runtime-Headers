@class NSString, CCDataSite, NSURL, BMAccessClient, NSObject;
@protocol OS_dispatch_queue;

@interface CCDataResourceReadAccess : NSObject {
    NSURL *_rootDirectoryURL;
    CCDataSite *_dataSite;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_useCase;
    BMAccessClient *_accessClient;
}

+ (id)defaultInstanceWithUseCase:(id)a0;

- (void).cxx_destruct;
- (id)databaseReadAccessForSet:(id)a0;
- (id)localDeviceIdForSet:(id)a0;
- (id)_accessAssertionForSetDirectory;
- (id)_accessAssertionForSet:(id)a0;
- (id)_accessAssertionForSetIdentifier:(id)a0 descriptors:(id)a1;
- (id)_accessForSetData:(id)a0 accessAssertion:(id)a1;
- (id)_defaultDataSiteWithError:(id *)a0;
- (BOOL)enumerateReadableSets:(id *)a0 itemType:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateReadableSets:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithRootDirectoryURL:(id)a0 useCase:(id)a1;

@end
