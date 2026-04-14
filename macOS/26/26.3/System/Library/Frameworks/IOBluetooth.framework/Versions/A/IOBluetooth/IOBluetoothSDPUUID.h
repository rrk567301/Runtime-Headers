@class NSData;

@interface IOBluetoothSDPUUID : NSData {
    NSData *mUUIDData;
    void *_mReserved;
}

+ (BOOL)supportsSecureCoding;
+ (id)uuid16:(unsigned short)a0;
+ (id)withSDPUUIDRef:(struct OpaqueIOBluetoothObjectRef { } *)a0;
+ (id)uuid32:(unsigned int)a0;
+ (id)uuidWithBytes:(const void *)a0 length:(unsigned int)a1;
+ (id)uuidWithData:(id)a0;

- (const void *)bytes;
- (Class)classForArchiver;
- (unsigned long long)length;
- (id)initWithData:(id)a0;
- (BOOL)isEqualToData:(id)a0;
- (Class)classForCoder;
- (void).cxx_destruct;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)classForPortCoder;
- (id)initWithUUID32:(unsigned int)a0;
- (id)initWithUUID16:(unsigned short)a0;
- (struct OpaqueIOBluetoothObjectRef { } *)getSDPUUIDRef;
- (id)getUUIDWithLength:(unsigned int)a0;
- (BOOL)isEqualToUUID:(id)a0;

@end
