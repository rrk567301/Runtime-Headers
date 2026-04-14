@class NSString, NSDictionary, SUCoreDescriptor, SUMacControllerOverrides, NRDUpdateDaemonClientImpl, NSError;
@protocol NRDUpdateBrainClientInterface;

@interface SUMacControllerRecoveryOSEventInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *persistenceDescription;
@property (retain, nonatomic) NSString *event;
@property (retain, nonatomic) SUCoreDescriptor *descriptor;
@property (retain, nonatomic) SUCoreDescriptor *sfrDescriptor;
@property (retain, nonatomic) SUMacControllerOverrides *overrides;
@property (retain, nonatomic) id<NRDUpdateBrainClientInterface> nrdBrain;
@property (retain, nonatomic) NRDUpdateDaemonClientImpl *nrdDaemon;
@property (retain, nonatomic) NSDictionary *nrdUpdateAttributes;
@property (nonatomic) BOOL nrdUpdateRequired;
@property (retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) id /* block */ completion;
@property (readonly, retain, nonatomic) id /* block */ progressCallback;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)getEvent;
- (id)getOverrides;
- (id)getError;
- (id)initWithProgressCallback:(id /* block */)a0 completion:(id /* block */)a1;
- (void)migrateNRDPropertiesFromEvent:(id)a0;
- (id)getDescriptor;
- (id)getSfrDescriptor;
- (id)getNrdDaemon;
- (id)getNrdUpdateAttributes;

@end
