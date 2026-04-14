@class NSData;

@interface BMSiriMemoryReferenceResolutionEntityValue : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) double timestamp;
@property (readonly, copy, nonatomic) NSData *valueData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)initWithTimestamp:(double)a0 valueData:(id)a1;

@end
