@interface MicroLocationDaemon.ULConclaveManager : NSObject <MicroLocationDaemon.ULConclaveManagerProtocol> {
    void /* unknown type, empty encoding */ service;
}

- (void)load;
- (id)init;
- (void).cxx_destruct;
- (void)dropWithIdentifiers:(id)a0;
- (id)getPoseEstimation;
- (id)initWithConclave:(BOOL)a0;
- (void)saveWithIdentifiers:(id)a0;

@end
