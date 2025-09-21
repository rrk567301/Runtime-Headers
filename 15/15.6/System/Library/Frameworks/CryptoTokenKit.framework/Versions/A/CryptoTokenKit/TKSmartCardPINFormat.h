@interface TKSmartCardPINFormat : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property long long charset;
@property long long encoding;
@property long long minPINLength;
@property long long maxPINLength;
@property long long PINBlockByteLength;
@property long long PINJustification;
@property long long PINBitOffset;
@property long long PINLengthBitOffset;
@property long long PINLengthBitSize;

+ (void)_writeNumber:(unsigned long long)a0 into:(id)a1 bitOffset:(long long)a2 bitLength:(long long)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned short)PINMaxExtraDigit;
- (unsigned char)PINBlockString;
- (unsigned char)PINFormatStringWithError:(id *)a0;
- (unsigned char)PINLengthFormatWithError:(id *)a0;
- (char)fillPIN:(id)a0 intoAPDUTemplate:(id)a1 PINByteOffset:(long long)a2 error:(id *)a3;

@end
