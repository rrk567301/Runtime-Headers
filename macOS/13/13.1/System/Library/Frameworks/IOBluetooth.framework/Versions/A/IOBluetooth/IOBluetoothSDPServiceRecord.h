@class IOBluetoothSDPUUID, NSArray, NSDictionary, IOBluetoothDevice;

@interface IOBluetoothSDPServiceRecord : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *attributes;
@property (retain) IOBluetoothDevice *device;
@property (copy, nonatomic) NSArray *sortedAttributes;
@property (readonly) IOBluetoothSDPUUID *serviceUUID;

+ (id)publishedServiceRecordWithDictionary:(id)a0;
+ (id)withSDPServiceRecordRef:(struct OpaqueIOBluetoothObjectRef { } *)a0;
+ (id)withServiceDictionary:(id)a0 device:(id)a1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithServiceDictionary:(id)a0 device:(id)a1;
- (id)getDevice;
- (int)removeServiceRecord;
- (struct OpaqueIOBluetoothObjectRef { } *)getSDPServiceRecordRef;
- (id)getAttributes;
- (BOOL)hasServiceFromArray:(id)a0;
- (BOOL)matchesUUID16:(unsigned short)a0;
- (BOOL)matchesUUIDArray:(id)a0;
- (BOOL)matchesSearchArray:(id)a0;
- (id)getAttributeDataElement:(unsigned short)a0;
- (id)getServiceName;
- (int)getRFCOMMChannelID:(char *)a0;
- (int)getL2CAPPSM:(unsigned short *)a0;
- (int)getServiceRecordHandle:(unsigned int *)a0;
- (BOOL)usesL2CAPPSM:(unsigned short)a0;
- (BOOL)usesRFCOMMChannelID:(unsigned char)a0;
- (unsigned short)handsFreeSupportedFeatures;

@end
