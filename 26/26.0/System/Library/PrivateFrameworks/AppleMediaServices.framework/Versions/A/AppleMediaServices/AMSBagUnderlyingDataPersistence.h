@interface AMSBagUnderlyingDataPersistence : NSObject {
    void /* unknown type, empty encoding */ directoryURL;
}

+ (id)persistenceWithDefaultDirectory;

- (id)init;
- (id)initWithDirectoryURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)persist:(id)a0 error:(id *)a1;
- (BOOL)removeUnderlyingDataFor:(id)a0 error:(id *)a1;
- (id)underlyingDataFor:(id)a0 error:(id *)a1;

@end
