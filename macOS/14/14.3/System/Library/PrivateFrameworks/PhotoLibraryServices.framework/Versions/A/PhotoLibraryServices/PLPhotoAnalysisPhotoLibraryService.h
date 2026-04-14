@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisPhotoLibraryService : NSObject {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
}

- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
