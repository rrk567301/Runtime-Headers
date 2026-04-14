@class NSString, PHLibraryScope;

@interface PHACameraSmartSharingTask : NSObject <PHATask>

@property (retain, nonatomic) PHLibraryScope *libraryScope;
@property (retain, nonatomic) NSString *libraryScopeLocalIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) BOOL didProduceContent;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)priority;
- (id)_libraryScopeToUseWithGraphManager:(id)a0 error:(id *)a1;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)taskClassDependencies;
- (void)timeoutFatal:(BOOL)a0;

@end
