@class FTAStarFuzzyMatchingRequest, NSMutableDictionary, FTAStarFuzzyMatchingResponse, NSData, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTAfmAStarFuzzyMatchingMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AfmAStarFuzzyMatchingMessage { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long session_message_type;
@property (readonly, nonatomic) FTAStarFuzzyMatchingRequest *session_messageAsFTAStarFuzzyMatchingRequest;
@property (readonly, nonatomic) FTAStarFuzzyMatchingResponse *session_messageAsFTAStarFuzzyMatchingResponse;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_immutableClassForType:(long long)a0;
+ (long long)session_message_typeForImmutableObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AfmAStarFuzzyMatchingMessage { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct AfmAStarFuzzyMatchingMessage { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::qss_fb::AfmAStarFuzzyMatchingMessage> { unsigned int x0; })addObjectToBuffer:(void *)a0;

@end
