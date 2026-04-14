@class AuRA_IOControllerHints, NSString, NSArray, NSData, NSNumber;
@protocol AuRA_ResourceArbitrator;

@interface MXAuRATranslator : NSObject {
    id<AuRA_ResourceArbitrator> mAuRA;
}

@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *mode;
@property (retain, nonatomic) NSNumber *mxSessionID;
@property (retain, nonatomic) NSData *disallowedPorts;
@property (retain, nonatomic) NSNumber *categoryOptions;
@property (retain, nonatomic) NSNumber *outputPortOverride;
@property (retain, nonatomic) NSString *preferredInput;
@property (retain, nonatomic) NSString *preferredOutput;
@property (retain, nonatomic) AuRA_IOControllerHints *ioControllerHintsStandard;
@property (retain, nonatomic) NSArray *ioControllerHintsDecoupled;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (int)applyConfiguration:(BOOL)a0;
- (id)copyIOControllersForSession:(unsigned long long)a0;
- (id)copySimulatedConfigurationChange;
- (id)copySimulatedPorts;
- (id)copyVirtualPortsForSession:(unsigned long long)a0;
- (id)createAuRAClientProcess:(id)a0;
- (id)getConfigurationHints;
- (int)registerSessionOnAuRA:(unsigned long long)a0 clientProcess:(id)a1;
- (int)unregisterSessionOnAuRA:(unsigned long long)a0;
- (id)updateSessionConfigurationRequest;

@end
