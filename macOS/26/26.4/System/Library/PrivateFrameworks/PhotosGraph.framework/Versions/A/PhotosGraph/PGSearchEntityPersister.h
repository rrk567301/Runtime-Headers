@interface PGSearchEntityPersister : NSObject {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ batchSize;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (BOOL)persistSearchEntitiesFromSearchEntityProvider:(id)a0 progressReporter:(id)a1 error:(id *)a2;

@end
