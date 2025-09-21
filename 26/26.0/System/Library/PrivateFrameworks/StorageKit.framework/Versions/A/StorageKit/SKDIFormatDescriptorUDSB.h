@class NSString;

@interface SKDIFormatDescriptorUDSB : NSObject <SKDiskImageFormatDescriptorProtocol>

@property (readonly, nonatomic) long long format;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *defaultExtension;
@property (readonly, nonatomic) BOOL isSupportedForBlankInitialization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
