@class NSString, NSObject;
@protocol OS_os_log;

@interface PHARemoveFeaturedContentTask : NSObject <PHAPhotoLibraryTask> {
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long featureCode;
@property (readonly, nonatomic) BOOL featureAvailable;
@property (readonly, nonatomic) BOOL featureComplete;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (int)priority;
- (id)init;
- (BOOL)currentPlatformIsSupported;
- (BOOL)shouldRunWithPhotoLibrary:(id)a0;
- (void)timeoutFatal:(BOOL)a0;
- (BOOL)runWithPhotoLibrary:(id)a0 analytics:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)incrementalKey;
- (BOOL)clearAllFeaturedStateForMemoriesAndSuggestionsWithPhotoLibrary:(id)a0 error:(id *)a1;

@end
