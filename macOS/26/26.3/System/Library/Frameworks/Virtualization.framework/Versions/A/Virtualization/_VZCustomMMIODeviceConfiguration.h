@class NSArray, NSDictionary, NSString, NSObject, _VZCustomMMIODeviceProvider;
@protocol OS_xpc_object;

@interface _VZCustomMMIODeviceConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying> {
    BOOL _supportsSaveRestore;
    NSDictionary *_additionalProperties;
    NSObject<OS_xpc_object> *_additionalXPCProperties;
}

@property (copy) NSArray *MMIORegions;
@property (copy) NSArray *irqs;
@property BOOL supportsSaveRestore;
@property (copy) NSDictionary *additionalProperties;
@property (copy) NSObject<OS_xpc_object> *additionalXPCProperties;
@property (retain) _VZCustomMMIODeviceProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
