@class NSNumber, HMMTRAccessControl, HMMTRStorage;
@protocol HMMTRFabricDelegate;

@interface HMMTRFabric : HMFObject

@property (copy) NSNumber *fabricID;
@property (readonly, getter=isSystemCommissionerFabric) BOOL systemCommissionerFabric;
@property (retain, nonatomic) HMMTRAccessControl *accessControl;
@property (readonly, weak, nonatomic) id<HMMTRFabricDelegate> delegate;
@property (weak, nonatomic) HMMTRStorage *storage;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)initSystemCommissionerFabricWithDelegate:(id)a0;

@end
