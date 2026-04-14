@class NSData, NSString;

@interface SIRINLUEXTERNALCDM_PLANNERCDMTranscriptEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasProtoEncoding;
@property (retain, nonatomic) NSData *protoEncoding;
@property (readonly, nonatomic) BOOL hasRuntimeEncoding;
@property (retain, nonatomic) NSData *runtimeEncoding;
@property (readonly, nonatomic) BOOL hasEventDescription;
@property (retain, nonatomic) NSString *eventDescription;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
