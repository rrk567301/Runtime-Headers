@class NSString, _INPBIntentMetadata;

@interface _INPBAnswerCallIntent : PBCodable <_INPBAnswerCallIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char audioRoute : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int audioRoute;
@property (nonatomic) char hasAudioRoute;
@property (copy, nonatomic) NSString *callIdentifier;
@property (readonly, nonatomic) char hasCallIdentifier;
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
- (int)StringAsAudioRoute:(id)a0;
- (id)audioRouteAsString:(int)a0;

@end
