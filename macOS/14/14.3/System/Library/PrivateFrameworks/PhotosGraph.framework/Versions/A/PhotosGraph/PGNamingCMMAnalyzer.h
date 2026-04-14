@class NSString, PGGraphNamingProcessor, PHPhotoLibrary, NSObject;
@protocol OS_os_log;

@interface PGNamingCMMAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor *_processor;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)name;
- (void).cxx_destruct;
- (void)findCMMMatchesFromSharingRecords:(id)a0 graph:(id)a1 withProgressBlock:(id /* block */)a2;
- (id)initWithNamingProcessor:(id)a0;
- (id)initWithNamingProcessor:(id)a0 photoLibrary:(id)a1 loggingConnection:(id)a2;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;

@end
