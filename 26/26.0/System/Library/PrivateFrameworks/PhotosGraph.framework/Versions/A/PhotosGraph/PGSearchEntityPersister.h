@interface PGSearchEntityPersister : NSObject {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ batchSize;
}

- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (BOOL)persistSearchEntitiesFromSearchEntityProvider:(id)a0 progressReporter:(id)a1 error:(id *)a2;

@end
