@class NSString, NSObject;
@protocol OS_os_log;

@interface PHARemoveFeaturedContentTask : NSObject <PHAPhotoLibraryTask> {
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long featureCode;
@property (readonly, nonatomic) char featureAvailable;
@property (readonly, nonatomic) char featureComplete;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (int)priority;
- (char)clearAllFeaturedStateForMemoriesAndSuggestionsWithPhotoLibrary:(id)a0 error:(id *)a1;
- (char)currentPlatformIsSupported;
- (id)incrementalKey;
- (char)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (char)runWithPhotoLibrary:(id)a0 analytics:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (char)shouldRunWithGraphManager:(id)a0;
- (char)shouldRunWithPhotoLibrary:(id)a0;
- (id)taskClassDependencies;
- (void)timeoutFatal:(char)a0;

@end
