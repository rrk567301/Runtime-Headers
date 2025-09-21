@class NSData;

@interface CIPDF417CodeDescriptor : CIBarcodeDescriptor

@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) char isCompact;
@property (readonly) long long rowCount;
@property (readonly) long long columnCount;

+ (char)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)a0 isCompact:(char)a1 rowCount:(long long)a2 columnCount:(long long)a3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPayload:(id)a0 isCompact:(char)a1 rowCount:(long long)a2 columnCount:(long long)a3;

@end
