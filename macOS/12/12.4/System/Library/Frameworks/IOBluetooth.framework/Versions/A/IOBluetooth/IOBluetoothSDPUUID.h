@class NSData;

@interface IOBluetoothSDPUUID : NSData {
    NSData *mUUIDData;
    void *_mReserved;
}

+ (BOOL)supportsSecureCoding;
+ (id)uuidWithBytes:(const void *)a0 length:(unsigned int)a1;
+ (id)uuid16:(unsigned short)a0;
+ (id)uuidWithData:(id)a0;
+ (id)uuid32:(unsigned int)a0;
+ (id)withSDPUUIDRef:(struct OpaqueIOBluetoothObjectRef { } *)a0;

- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (const void *)bytes;
- (Class)classForCoder;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)classForArchiver;
- (BOOL)isEqualToData:(id)a0;
- (Class)classForPortCoder;
- (id)initWithUUID16:(unsigned short)a0;
- (id)initWithUUID32:(unsigned int)a0;
- (BOOL)isEqualToUUID:(id)a0;
- (id)getUUIDWithLength:(unsigned int)a0;
- (struct OpaqueIOBluetoothObjectRef { } *)getSDPUUIDRef;

@end
