@class BMTopicEntity, BMPersonEntity;

@interface BMEntity : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) char isPersonType;
@property (readonly, nonatomic) char isTopicType;
@property (readonly, nonatomic) BMTopicEntity *topicEntity;
@property (readonly, nonatomic) BMPersonEntity *personEntity;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithIsPersonType:(char)a0 isTopicType:(char)a1 topicEntity:(id)a2 personEntity:(id)a3;
- (id)initWithPersonEntity:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithTopicEntity:(id)a0;

@end
