@class NSObject;

@interface IOBluetoothSDPDataElement : NSObject <NSCoding, NSSecureCoding> {
    unsigned char mTypeDescriptor;
    unsigned char mSizeDescriptor;
    unsigned int mSize;
    NSObject *mValue;
    void *_mReserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)withElementValue:(id)a0;
+ (id)withType:(unsigned char)a0 sizeDescriptor:(unsigned char)a1 size:(unsigned int)a2 value:(id)a3;
+ (id)withSDPDataElementRef:(struct OpaqueIOBluetoothObjectRef { } *)a0;
+ (id)withBytes:(char *)a0 maxLength:(unsigned int)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)getStringValue;
- (BOOL)containsValue:(id)a0;
- (id)getNumberValue;
- (id)initWithiOSBytes:(const char *)a0 maxLength:(unsigned int)a1 bytesUsed:(unsigned int *)a2;
- (id)getDataValue;
- (id)initWithType:(unsigned char)a0 sizeDescriptor:(unsigned char)a1 size:(unsigned int)a2 value:(id)a3;
- (unsigned int)getEncodedSize;
- (id)initWithElementValue:(id)a0;
- (void)updateVariableSizeDescriptor;
- (BOOL)updateFromArrayValue:(id)a0;
- (void)updateFixedSizeDescriptor;
- (id)getValue;
- (id)promoteUUID:(id)a0 length:(unsigned char)a1;
- (unsigned char)getTypeDescriptor;
- (unsigned int)getSize;
- (id)getArrayValue;
- (struct OpaqueIOBluetoothObjectRef { } *)getSDPDataElementRef;
- (unsigned char)getSizeDescriptor;
- (id)getUUIDValue;
- (BOOL)containsDataElement:(id)a0;
- (id)initWithBytes:(char *)a0 maxLength:(unsigned int)a1;
- (unsigned char)readHeaderData:(char *)a0 maxLength:(unsigned int)a1;
- (unsigned char)getHeaderSize;
- (void)replaceValue:(id)a0;

@end
