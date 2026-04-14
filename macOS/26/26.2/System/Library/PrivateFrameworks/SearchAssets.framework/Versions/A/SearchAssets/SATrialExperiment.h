@interface SATrialExperiment : NSObject {
    void /* unknown type, empty encoding */ _experimentNamespace;
    void /* unknown type, empty encoding */ _experimentID;
    void /* unknown type, empty encoding */ _treatmentID;
    void /* unknown type, empty encoding */ _deploymentID;
    void /* unknown type, empty encoding */ _compatibilityVersion;
    void /* unknown type, empty encoding */ _allocationStatus;
}

- (id)treatmentID;
- (id)deploymentID;
- (void).cxx_destruct;
- (id)init;
- (id)compatibilityVersion;
- (id)experimentID;
- (int)allocationStatus;
- (id)experimentNamespace;

@end
