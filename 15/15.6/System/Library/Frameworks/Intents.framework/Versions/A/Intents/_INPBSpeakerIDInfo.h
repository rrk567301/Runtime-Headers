@class NSString, _INPBString;

@interface _INPBSpeakerIDInfo : PBCodable <_INPBSpeakerIDInfo, NSSecureCoding, NSCopying> {
    struct { unsigned char speakerIDConfidence : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBString *sharedUserID;
@property (readonly, nonatomic) char hasSharedUserID;
@property (nonatomic) int speakerIDConfidence;
@property (nonatomic) char hasSpeakerIDConfidence;
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
- (int)StringAsSpeakerIDConfidence:(id)a0;
- (id)speakerIDConfidenceAsString:(int)a0;

@end
