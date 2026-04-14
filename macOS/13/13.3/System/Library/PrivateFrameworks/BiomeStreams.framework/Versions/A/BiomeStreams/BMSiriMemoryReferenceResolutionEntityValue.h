@class NSData;

@interface BMSiriMemoryReferenceResolutionEntityValue : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) double timestamp;
@property (readonly, copy, nonatomic) NSData *valueData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithTimestamp:(double)a0 valueData:(id)a1;
- (id)proto;

@end
