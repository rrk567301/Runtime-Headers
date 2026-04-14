@class NSString, HAPCameraBufferEventCMAFSessionStart, HAPCameraBufferEventCMAFSessionStop, HAPCameraBufferEventTypeWrapper, HAPTLVUnsignedNumberValue, HAPCameraBufferEventMotion;

@interface HAPCameraBufferEvent : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *sequenceNumber;
@property (retain, nonatomic) HAPCameraBufferEventTypeWrapper *type;
@property (retain, nonatomic) HAPCameraBufferEventCMAFSessionStart *CMAFSessionStart;
@property (retain, nonatomic) HAPCameraBufferEventCMAFSessionStop *CMAFSessionStop;
@property (retain, nonatomic) HAPCameraBufferEventMotion *motion;
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
- (id)initWithSequenceNumber:(id)a0 type:(id)a1 CMAFSessionStart:(id)a2 CMAFSessionStop:(id)a3 motion:(id)a4;

@end
