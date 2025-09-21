@class IOBluetoothSDPUUID, NSArray, NSDictionary, IOBluetoothDevice;

@interface IOBluetoothSDPServiceRecord : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSDictionary *attributes;
@property (retain) IOBluetoothDevice *device;
@property (copy, nonatomic) NSArray *sortedAttributes;
@property (readonly) IOBluetoothSDPUUID *serviceUUID;

+ (id)publishedServiceRecordWithDictionary:(id)a0;
+ (id)withSDPServiceRecordRef:(struct OpaqueIOBluetoothObjectRef { } *)a0;
+ (id)withServiceDictionary:(id)a0 device:(id)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)getAttributeDataElement:(unsigned short)a0;
- (id)getAttributes;
- (id)getDevice;
- (int)getL2CAPPSM:(unsigned short *)a0;
- (int)getRFCOMMChannelID:(char *)a0;
- (struct OpaqueIOBluetoothObjectRef { } *)getSDPServiceRecordRef;
- (id)getServiceName;
- (int)getServiceRecordHandle:(unsigned int *)a0;
- (unsigned short)handsFreeSupportedFeatures;
- (char)hasServiceFromArray:(id)a0;
- (id)initWithServiceDictionary:(id)a0 device:(id)a1;
- (char)matchesSearchArray:(id)a0;
- (char)matchesUUID16:(unsigned short)a0;
- (char)matchesUUIDArray:(id)a0;
- (int)removeServiceRecord;
- (char)usesL2CAPPSM:(unsigned short)a0;
- (char)usesRFCOMMChannelID:(unsigned char)a0;

@end
