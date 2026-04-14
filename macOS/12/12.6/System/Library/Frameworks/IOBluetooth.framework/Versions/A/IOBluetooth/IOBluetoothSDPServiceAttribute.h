@class IOBluetoothSDPDataElement;

@interface IOBluetoothSDPServiceAttribute : NSObject <NSCoding, NSSecureCoding> {
    unsigned short mAttributeID;
    IOBluetoothSDPDataElement *mAttributeDataElement;
    IOBluetoothSDPDataElement *mAttributeIDDataElement;
    void *_mReserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)withID:(unsigned short)a0 attributeElementValue:(id)a1;
+ (id)withID:(unsigned short)a0 attributeElement:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithID:(unsigned short)a0 attributeElementValue:(id)a1;
- (id)initWithID:(unsigned short)a0 attributeElement:(id)a1;
- (unsigned short)getAttributeID;
- (id)getDataElement;
- (id)getIDDataElement;
- (long long)compareAttributeID:(id)a0;
- (unsigned int)getEncodedSize;

@end
