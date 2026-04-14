@class NSString, HAPCameraVideoQualityWrapper, HAPTLVUnsignedNumberValue;

@interface HAPVideoStreamTier : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *identifier;
@property (retain, nonatomic) HAPCameraVideoQualityWrapper *quality;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *targetAverageBitrate;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *width;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *height;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *frameRate;
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
- (id)initWithIdentifier:(id)a0 quality:(id)a1 targetAverageBitrate:(id)a2 width:(id)a3 height:(id)a4 frameRate:(id)a5;

@end
