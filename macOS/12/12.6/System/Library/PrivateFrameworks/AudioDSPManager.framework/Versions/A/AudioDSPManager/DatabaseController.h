@class ADMPersistentContainer, MediaContentDSPMOFetchUtil, IOControllerConfigurationMOFetchUtil, VPContentDSPMOFetchUtil, DSPFlavorMOFetchUtil, HWDSPMOFetchUtil, DSPModuleAggregatedControlMOFetchUtil, DeviceFormatMOFetchUtil, PortMOFetchUtil, DeviceConfigurationMOFetchUtil, IOStreamFormatMOFetchUtil, VolumePolicyMOFetchUtil, NSManagedObjectContext, IOControllerSemanticMOFetchUtil, NSString, DSPModuleMOFetchUtil, DSPModuleControlMOFetchUtil;

@interface DatabaseController : NSObject <NSSecureCoding> {
    NSString *_productID;
    ADMPersistentContainer *_persistentContainer;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DeviceConfigurationMOFetchUtil *deviceConfigurationMOFetchUtil;
@property (readonly, nonatomic) DeviceFormatMOFetchUtil *deviceFormatMOFetchUtil;
@property (readonly, nonatomic) DSPFlavorMOFetchUtil *dspFlavorMOFetchUtil;
@property (readonly, nonatomic) DSPModuleMOFetchUtil *dspModuleMOFetchUtil;
@property (readonly, nonatomic) DSPModuleAggregatedControlMOFetchUtil *dspModuleAggregatedControlMOFetchUtil;
@property (readonly, nonatomic) DSPModuleControlMOFetchUtil *dspModuleControlMOFetchUtil;
@property (readonly, nonatomic) HWDSPMOFetchUtil *hwDSPMOFetchUtil;
@property (readonly, nonatomic) IOControllerConfigurationMOFetchUtil *ioControllerConfigurationMOFetchUtil;
@property (readonly, nonatomic) IOControllerSemanticMOFetchUtil *ioControllerSemanticMOFetchUtil;
@property (readonly, nonatomic) IOStreamFormatMOFetchUtil *ioStreamFormatMOFetchUtil;
@property (readonly, nonatomic) MediaContentDSPMOFetchUtil *mediaContentDSPMOFetchUtil;
@property (readonly, nonatomic) PortMOFetchUtil *portMOFetchUtil;
@property (readonly, nonatomic) VPContentDSPMOFetchUtil *vpContentDSPMOFetchUtil;
@property (readonly, nonatomic) VolumePolicyMOFetchUtil *volumePolicyMOFetchUtil;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProductID:(id)a0;
- (id)deviceConfigurationMOFetchUtil;
- (id)portMOFetchUtil;
- (id)mediaContentDSPMOFetchUtil;
- (id)vpContentDSPMOFetchUtil;
- (id)hwDSPMOFetchUtil;
- (id)ioControllerConfigurationMOFetchUtil;
- (id)ioStreamFormatMOFetchUtil;
- (id)dspFlavorMOFetchUtil;
- (id)dspModuleMOFetchUtil;
- (id)dspModuleAggregatedControlMOFetchUtil;
- (id)dspModuleControlMOFetchUtil;
- (id)ioControllerSemanticMOFetchUtil;
- (void)saveManagedObjects;

@end
