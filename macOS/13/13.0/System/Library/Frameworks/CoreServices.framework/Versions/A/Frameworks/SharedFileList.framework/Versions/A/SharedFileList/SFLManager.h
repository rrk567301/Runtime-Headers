@interface SFLManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id setByIdentifier;

+ (id)sharedInstance;
+ (id)listIdentifiers;
+ (Class)classForListWithIdentifier:(id)a0;

- (id)_init;
- (void).cxx_destruct;
- (id)listWithIdentifier:(id)a0;
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
- (id)sharePoints;

@end
