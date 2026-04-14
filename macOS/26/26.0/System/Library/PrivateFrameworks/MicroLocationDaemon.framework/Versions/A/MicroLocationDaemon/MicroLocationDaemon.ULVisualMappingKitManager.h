@interface MicroLocationDaemon.ULVisualMappingKitManager : NSObject <MicroLocationDaemon.OdometryHandling, MicroLocationDaemon.RelativePoseHandling> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ exclaveManager;
    void /* unknown type, empty encoding */ databaseService;
    void /* unknown type, empty encoding */ visualMappingService;
    void /* unknown type, empty encoding */ locationID;
    void /* unknown type, empty encoding */ currentTransform;
}

- (void)teardown;
- (id)init;
- (void).cxx_destruct;
- (id)getAnchors;
- (BOOL)setupFor:(id)a0 error:(id *)a1;
- (id)addAnchorWithIdentifiedBy:(id)a0 error:(id *)a1;
- (BOOL)deleteAnchorWithIdentifiedBy:(id)a0 error:(id *)a1;
- (id)initWithQueue:(id)a0 delegate:(id)a1 exclaveManager:(id)a2 databaseService:(id)a3;
- (BOOL)processOdometry:(id)a0 error:(id *)a1;
- (BOOL)processPoseEstimation:(id)a0 error:(id *)a1;

@end
