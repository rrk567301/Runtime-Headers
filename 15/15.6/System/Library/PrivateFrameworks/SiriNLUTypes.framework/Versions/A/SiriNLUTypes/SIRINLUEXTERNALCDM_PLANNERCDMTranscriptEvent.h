@class NSData, NSString;

@interface SIRINLUEXTERNALCDM_PLANNERCDMTranscriptEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasProtoEncoding;
@property (retain, nonatomic) NSData *protoEncoding;
@property (readonly, nonatomic) char hasRuntimeEncoding;
@property (retain, nonatomic) NSData *runtimeEncoding;
@property (readonly, nonatomic) char hasEventDescription;
@property (retain, nonatomic) NSString *eventDescription;

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
