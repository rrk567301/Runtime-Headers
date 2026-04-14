@class NSObject;

@interface IOBluetoothSDPDataElement : NSObject <NSCoding, NSSecureCoding> {
    unsigned char mTypeDescriptor;
    unsigned char mSizeDescriptor;
    unsigned int mSize;
    NSObject *mValue;
    void *_mReserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)withBytes:(char *)a0 maxLength:(unsigned int)a1;
+ (id)withElementValue:(id)a0;
+ (id)withSDPDataElementRef:(struct OpaqueIOBluetoothObjectRef { } *)a0;
+ (id)withType:(unsigned char)a0 sizeDescriptor:(unsigned char)a1 size:(unsigned int)a2 value:(id)a3;

- (id)getValue;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)containsValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)getStringValue;
- (unsigned int)getSize;
- (BOOL)containsDataElement:(id)a0;
- (id)getArrayValue;
- (id)getDataValue;
- (unsigned int)getEncodedSize;
- (unsigned char)getHeaderSize;
- (id)getNumberValue;
- (struct OpaqueIOBluetoothObjectRef { } *)getSDPDataElementRef;
- (unsigned char)getSizeDescriptor;
- (unsigned char)getTypeDescriptor;
- (id)getUUIDValue;
- (id)initWithBytes:(char *)a0 maxLength:(unsigned int)a1;
- (id)initWithElementValue:(id)a0;
- (id)initWithType:(unsigned char)a0 sizeDescriptor:(unsigned char)a1 size:(unsigned int)a2 value:(id)a3;
- (id)initWithiOSBytes:(const char *)a0 maxLength:(unsigned int)a1 bytesUsed:(unsigned int *)a2;
- (id)promoteUUID:(id)a0 length:(unsigned char)a1;
- (unsigned char)readHeaderData:(char *)a0 maxLength:(unsigned int)a1;
- (void)replaceValue:(id)a0;
- (void)updateFixedSizeDescriptor;
- (BOOL)updateFromArrayValue:(id)a0;
- (void)updateVariableSizeDescriptor;

@end
