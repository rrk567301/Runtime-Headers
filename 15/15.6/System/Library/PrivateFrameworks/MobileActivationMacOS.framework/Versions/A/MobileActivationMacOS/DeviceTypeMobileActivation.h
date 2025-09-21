@class NSString;

@interface DeviceTypeMobileActivation : NSObject

@property (readonly, copy, nonatomic) NSString *product_type;
@property (readonly, copy, nonatomic) NSString *device_class;
@property (readonly, copy, nonatomic) NSString *hardware_model;
@property (readonly, copy, nonatomic) NSString *soc_generation;
@property (readonly, nonatomic) char device_supports_dcrt_oob;
@property (readonly, nonatomic) char device_supports_mfi_certificates;
@property (readonly, nonatomic) char device_supports_eda_certificates;
@property (readonly, nonatomic) char is_prodfused_demoted;
@property (readonly, nonatomic) char is_devfused_undemoted;
@property (readonly, nonatomic) char is_dev_board;
@property (readonly, nonatomic) char is_fpga;
@property (readonly, nonatomic) char is_ipod;
@property (readonly, nonatomic) char is_ipad;
@property (readonly, nonatomic) char is_iphone;
@property (readonly, nonatomic) char is_audio_accessory;
@property (readonly, nonatomic) char has_baseband;
@property (readonly, nonatomic) char should_hactivate;
@property (readonly, nonatomic) char is_internal_build;
@property (readonly, nonatomic) char has_internal_diagnostics;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)copyDeviceTreeInt:(id)a0 key:(id)a1 defaultValue:(int)a2;
- (id)copyDeviceTreeProperty:(id)a0 key:(id)a1;
- (id)copyBootArgs;
- (id)copyBootSessionUUID;
- (id)copyDeviceTreeString:(id)a0 key:(id)a1 defaultValue:(id)a2;
- (char)runningInRAMDisk;

@end
