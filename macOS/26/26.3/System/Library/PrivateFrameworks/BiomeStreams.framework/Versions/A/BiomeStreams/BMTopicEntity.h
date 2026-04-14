@class NSString, NSDictionary;

@interface BMTopicEntity : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *topicId;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDictionary *attributes;

- (id)proto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTopicId:(id)a0 displayName:(id)a1 attributes:(id)a2;

@end
