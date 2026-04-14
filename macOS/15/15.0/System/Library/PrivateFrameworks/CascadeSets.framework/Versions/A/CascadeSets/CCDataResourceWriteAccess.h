@class CCDataSite, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CCDataResourceWriteAccess : NSObject {
    CCDataSite *_dataSite;
    NSURL *_rootDirectoryURL;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultInstance;

- (void).cxx_destruct;
- (BOOL)performMaintenanceActivity:(id /* block */)a0 accessAssertion:(id)a1;
- (id)setWriterForSet:(id)a0 accessAssertion:(id)a1;
- (id)initWithRootDirectoryURL:(id)a0 queue:(id)a1;
- (id)_defaultDataSiteWithError:(id *)a0;
- (BOOL)_didRunMaintenance:(id /* block */)a0 accessAssertion:(id)a1;

@end
