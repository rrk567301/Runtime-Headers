@interface BWStillImageCaptureBracketFrameInfo : BWStillImageCaptureFrameInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int bracketedCaptureSequenceNumber;

+ (id)infoWithBracketedCaptureSequenceNumber:(int)a0 mainFlags:(unsigned long long)a1 sifrFlags:(unsigned long long)a2;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBracketedCaptureSequenceNumber:(int)a0 mainFlags:(unsigned long long)a1 sifrFlags:(unsigned long long)a2;

@end
