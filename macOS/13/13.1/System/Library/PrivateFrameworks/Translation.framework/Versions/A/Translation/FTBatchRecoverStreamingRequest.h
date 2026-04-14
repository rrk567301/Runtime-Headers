@class FTStartBatchRecoverRequest, NSMutableDictionary, NSData, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTBatchRecoverStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BatchRecoverStreamingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) FTStartBatchRecoverRequest *contentAsFTStartBatchRecoverRequest;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (Class)content_immutableClassForType:(long long)a0;
+ (long long)content_typeForImmutableObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchRecoverStreamingRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct BatchRecoverStreamingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::qss_fb::BatchRecoverStreamingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;

@end
