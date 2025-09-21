@class _SDSSessionNextIncomingConnectionStreamNameAck, _SDSVersionNegotiationResponse, _SDSVersionNegotiationRequest, _SDSSessionNextIncomingConnectionStreamName, _SDSNamedStreamResponse, _SDSNamedStreamRequest, _SDSSessionNewStreamAck, _SDSSessionNewStreamIntent, _SDSSessionNextIncomingConnectionComplete, AFBBufRef;

@interface _SDSControlMessageHolder : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct ControlMessageHolder { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) unsigned char messageType;
@property (readonly, nonatomic) _SDSVersionNegotiationRequest *messageAsVersionNegotiationRequest;
@property (readonly, nonatomic) _SDSVersionNegotiationResponse *messageAsVersionNegotiationResponse;
@property (readonly, nonatomic) _SDSNamedStreamRequest *messageAsNamedStreamRequest;
@property (readonly, nonatomic) _SDSNamedStreamResponse *messageAsNamedStreamResponse;
@property (readonly, nonatomic) _SDSSessionNewStreamIntent *messageAsSessionNewStreamIntent;
@property (readonly, nonatomic) _SDSSessionNewStreamAck *messageAsSessionNewStreamAck;
@property (readonly, nonatomic) _SDSSessionNextIncomingConnectionStreamName *messageAsSessionNextIncomingConnectionStreamName;
@property (readonly, nonatomic) _SDSSessionNextIncomingConnectionStreamNameAck *messageAsSessionNextIncomingConnectionStreamNameAck;
@property (readonly, nonatomic) _SDSSessionNextIncomingConnectionComplete *messageAsSessionNextIncomingConnectionComplete;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initVerifiedRootObjectFromData:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0 changes:(id)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1 maxDepth:(unsigned int)a2 maxTables:(unsigned int)a3;
- (id)initWithBufRef:(id)a0 cppPointer:(const struct ControlMessageHolder { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (BOOL)verifyUTF8Fields;

@end
