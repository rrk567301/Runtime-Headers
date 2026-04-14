@class NSString, NSData, HAPTLVUnsignedNumberValue, HAPCameraVideoQualityWrapper;

@interface HAPCameraVideoStreamCapabilities : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *identifier;
@property (retain, nonatomic) HAPCameraVideoQualityWrapper *quality;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *width;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *height;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *framesPerSecond;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *averageBitrate;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *peakBitrate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)serializeWithError:(id *)a0;
- (id)initWithIdentifier:(id)a0 quality:(id)a1 width:(id)a2 height:(id)a3 framesPerSecond:(id)a4 averageBitrate:(id)a5 peakBitrate:(id)a6;

@end
