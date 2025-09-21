@class NSData;

@interface CIQRCodeDescriptor : CIBarcodeDescriptor

@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) long long symbolVersion;
@property (readonly) unsigned char maskPattern;
@property (readonly) long long errorCorrectionLevel;

+ (char)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)a0 symbolVersion:(long long)a1 maskPattern:(unsigned char)a2 errorCorrectionLevel:(long long)a3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPayload:(id)a0 symbolVersion:(long long)a1 maskPattern:(unsigned char)a2 errorCorrectionLevel:(long long)a3;

@end
