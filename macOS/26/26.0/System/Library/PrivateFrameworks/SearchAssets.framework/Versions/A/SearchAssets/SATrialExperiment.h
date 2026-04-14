@interface SATrialExperiment : NSObject {
    void /* unknown type, empty encoding */ _experimentNamespace;
    void /* unknown type, empty encoding */ _experimentID;
    void /* unknown type, empty encoding */ _treatmentID;
    void /* unknown type, empty encoding */ _deploymentID;
    void /* unknown type, empty encoding */ _compatibilityVersion;
    void /* unknown type, empty encoding */ _allocationStatus;
}

- (id)treatmentID;
- (id)experimentID;
- (id)init;
- (id)deploymentID;
- (id)compatibilityVersion;
- (void).cxx_destruct;
- (int)allocationStatus;
- (id)experimentNamespace;

@end
