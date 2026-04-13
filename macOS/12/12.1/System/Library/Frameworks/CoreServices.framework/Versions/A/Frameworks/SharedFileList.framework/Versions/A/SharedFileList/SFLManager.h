@interface SFLManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id setByIdentifier;

+ (id)sharedInstance;
+ (Class)classForListWithIdentifier:(id)a0;
+ (id)listIdentifiers;

- (void).cxx_destruct;
- (id)_init;
- (id)listWithIdentifier:(id)a0;
- (id)sharePoints;
- (id)setWithIdentifier:(id)a0;
- (id)loginItems;
- (id)serviceManagementLoginItems;
- (id)launchdJobs;
- (id)favoriteItems;
- (id)favoriteVolumes;
- (id)favoriteServers;
- (id)iCloudItems;
- (id)projectItems;
- (id)recentDocuments;
- (id)recentApplications;
- (id)recentHosts;
- (id)recentServers;
- (id)recentDocumentsForBundleIdentifier:(id)a0;

@end
