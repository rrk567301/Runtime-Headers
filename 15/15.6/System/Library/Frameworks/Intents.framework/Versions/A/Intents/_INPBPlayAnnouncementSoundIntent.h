@class NSString, _INPBIntentMetadata;

@interface _INPBPlayAnnouncementSoundIntent : PBCodable <_INPBPlayAnnouncementSoundIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char soundType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) int soundType;
@property (nonatomic) char hasSoundType;
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
- (int)StringAsSoundType:(id)a0;
- (id)soundTypeAsString:(int)a0;

@end
