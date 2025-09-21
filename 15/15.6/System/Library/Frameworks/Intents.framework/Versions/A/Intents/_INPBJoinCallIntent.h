@class NSString, _INPBCallGroupConversation, _INPBCallGroupConversationFilter, _INPBIntentMetadata;

@interface _INPBJoinCallIntent : PBCodable <_INPBJoinCallIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBCallGroupConversation *groupConversation;
@property (readonly, nonatomic) char hasGroupConversation;
@property (retain, nonatomic) _INPBCallGroupConversationFilter *groupConversationFilter;
@property (readonly, nonatomic) char hasGroupConversationFilter;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
