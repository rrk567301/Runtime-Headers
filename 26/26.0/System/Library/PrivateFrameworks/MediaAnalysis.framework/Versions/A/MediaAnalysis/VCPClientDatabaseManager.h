@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPClientDatabaseManager : NSObject <PHPhotoLibraryAvailabilityObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_databases;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDatabaseForPhotoLibrary:(id)a0;
+ (id)sharedDatabaseForPhotoLibraryURL:(id)a0;
+ (id)sharedDatabaseManager;

- (void)photoLibraryDidBecomeUnavailable:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)closeDatabaseForLibrary:(id)a0;
- (id)sharedDatabaseForPhotoLibrary:(id)a0;
- (id)sharedDatabaseForPhotoLibraryURL:(id)a0;

@end
