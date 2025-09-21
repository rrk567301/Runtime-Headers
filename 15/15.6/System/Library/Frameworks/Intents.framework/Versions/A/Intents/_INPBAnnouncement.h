@class NSString, _INPBURLValue;

@interface _INPBAnnouncement : PBCodable <_INPBAnnouncement, NSSecureCoding, NSCopying> {
    struct { unsigned char endTime : 1; unsigned char startTime : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long endTime;
@property (nonatomic) char hasEndTime;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (copy, nonatomic) NSString *speechDataTranscription;
@property (readonly, nonatomic) char hasSpeechDataTranscription;
@property (retain, nonatomic) _INPBURLValue *speechDataURL;
@property (readonly, nonatomic) char hasSpeechDataURL;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) char hasStartTime;
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
