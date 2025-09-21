@class NSString, NSData;

@interface SWCollaborationNoticeTransmissionMessage : PBCodable <NSCopying>

@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *guidString;
@property (retain, nonatomic) NSData *highlightChangeEvent;
@property (nonatomic) long long highlightChangeEventType;
@property (nonatomic) double dateAsTimeIntervalSince1970;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
