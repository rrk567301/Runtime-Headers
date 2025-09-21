@interface WFFilesystemStateManager : NSObject {
    void /* unknown type, empty encoding */ fileStateWorkQueue;
    void /* unknown type, empty encoding */ database;
}

+ (BOOL)isDirectoryCountBelowLimitFor:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 workQueue:(id)a1;

@end
