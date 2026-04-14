@class NSString, NSObject;
@protocol OS_os_log;

@interface GCConfigurationBundleFileSystemSource : NSObject <GCConfigurationBundleFileSystemSource> {
    NSObject<OS_os_log> *_log;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)configurationBundleURLsForType:(id)a0;

@end
