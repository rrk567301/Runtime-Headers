@interface MFSwiftIMAPBodyFetchContext : NSObject <MCBodyFetchContext> {
    void /* unknown type, empty encoding */ taskManager;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)cacheBodiesForMessages:(id)a0;

@end
