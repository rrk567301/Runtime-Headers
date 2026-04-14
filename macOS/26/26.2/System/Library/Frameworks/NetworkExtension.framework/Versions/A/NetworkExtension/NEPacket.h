@class NSData, NEFlowMetaData, NEFilterPacketInterpose;

@interface NEPacket : NSObject <NSCopying, NSSecureCoding> {
    void *_context;
    NEFilterPacketInterpose *_interpose;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *data;
@property (readonly) unsigned char protocolFamily;
@property (readonly) long long direction;
@property (readonly) NEFlowMetaData *metadata;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithData:(id)a0 protocolFamily:(unsigned char)a1;

@end
