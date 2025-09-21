@class ML3MusicLibrary;
@protocol ML3DatabaseValidationDelegate;

@interface ML3DatabaseValidation : NSObject

@property (readonly, nonatomic) ML3MusicLibrary *library;
@property (weak, nonatomic) id<ML3DatabaseValidationDelegate> delegate;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) char truncateBeforeValidating;

- (void).cxx_destruct;
- (char)_internalUserAgreesToRebuildUnmigratableDatabase;
- (void)_logDatabasePathDirectoryAttributes;
- (char)_performDatabasePreprocessingWithLibrary:(id)a0 error:(id *)a1;
- (char)_performSchemaUpgradeWithLibrary:(id)a0 error:(id *)a1;
- (char)_truncateDatabaseFileForLibrary:(id)a0 withError:(id *)a1;
- (char)_validateLibraryDatabaseIfNecessary:(id)a0 withError:(id *)a1;
- (id)initWithLibrary:(id)a0 delegate:(id)a1 completion:(id /* block */)a2;
- (void)runValidation;

@end
