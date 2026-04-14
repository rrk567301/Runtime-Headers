@class NSString, NSData, HAPTLVUnsignedNumberValue, HAPRTPStreamingControlCommandWrapper;

@interface HAPRTPStreamingControlRequest : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *sessionIdentifier;
@property (retain, nonatomic) HAPRTPStreamingControlCommandWrapper *command;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *videoTier;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *videoSSRC;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *audioTier;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *audioSSRC;
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
- (id)initWithSessionIdentifier:(id)a0 command:(id)a1 videoTier:(id)a2 videoSSRC:(id)a3 audioTier:(id)a4 audioSSRC:(id)a5;

@end
