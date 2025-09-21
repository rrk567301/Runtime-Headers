@interface AMSBagUnderlyingDataPersistence : NSObject {
    void /* unknown type, empty encoding */ directoryURL;
}

+ (id)persistenceWithDefaultDirectory;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDirectoryURL:(id)a0;
- (char)persist:(id)a0 error:(id *)a1;
- (char)removeUnderlyingDataFor:(id)a0 error:(id *)a1;
- (id)underlyingDataFor:(id)a0 error:(id *)a1;

@end
