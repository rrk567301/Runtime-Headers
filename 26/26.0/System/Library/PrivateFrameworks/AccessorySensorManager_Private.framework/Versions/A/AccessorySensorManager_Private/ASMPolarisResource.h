@class NSString;

@interface ASMPolarisResource : NSObject <ASMPolarisResourceProtocol>

@property (retain, nonatomic) NSString *resourceKey;
@property (nonatomic) unsigned int resourceCategory;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *bluetoothUUID;
@property (nonatomic) unsigned int productID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
