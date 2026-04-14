@class NSString, HAPCameraBufferEventCommandTypeWrapper, HAPTLVUnsignedNumberValue;

@interface HAPCameraBufferEventCommandRequest : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPCameraBufferEventCommandTypeWrapper *command;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *sequenceNumber;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *limit;
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
- (id)initWithCommand:(id)a0 sequenceNumber:(id)a1 limit:(id)a2;

@end
