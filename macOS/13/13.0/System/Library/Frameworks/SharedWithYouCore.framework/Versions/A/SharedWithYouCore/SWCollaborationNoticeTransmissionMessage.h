@class NSString, NSData;

@interface SWCollaborationNoticeTransmissionMessage : PBCodable <NSCopying>

@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *guidString;
@property (retain, nonatomic) NSData *highlightChangeEvent;
@property (nonatomic) long long highlightChangeEventType;
@property (nonatomic) double dateAsTimeIntervalSince1970;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
