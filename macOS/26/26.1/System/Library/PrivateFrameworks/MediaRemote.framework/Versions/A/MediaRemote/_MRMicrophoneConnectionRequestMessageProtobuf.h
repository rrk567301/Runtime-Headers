@class _MRRequestDetailsProtobuf, NSString;

@interface _MRMicrophoneConnectionRequestMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDetails;
@property (retain, nonatomic) _MRRequestDetailsProtobuf *details;
@property (readonly, nonatomic) BOOL hasRapportIdentifier;
@property (retain, nonatomic) NSString *rapportIdentifier;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
