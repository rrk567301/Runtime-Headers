@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MADVectorDatabaseManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_databases;
}

@property (nonatomic) BOOL readOnly;

+ (id)sharedManager;
+ (id)sharedDatabaseWithPhotoLibrary:(id)a0;
+ (void)releaseAllSharedDatabase;
+ (void)releaseSharedDatabaseWithPhotoLibrary:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)sharedDatabaseWithPhotoLibrary:(id)a0;
- (void)releaseAllSharedDatabase;
- (void)releaseSharedDatabaseWithPhotoLibrary:(id)a0;

@end
