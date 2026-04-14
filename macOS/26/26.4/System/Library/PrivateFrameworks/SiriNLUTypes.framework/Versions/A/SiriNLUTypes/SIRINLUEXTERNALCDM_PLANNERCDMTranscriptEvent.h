@class NSData, NSString;

@interface SIRINLUEXTERNALCDM_PLANNERCDMTranscriptEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasProtoEncoding;
@property (retain, nonatomic) NSData *protoEncoding;
@property (readonly, nonatomic) BOOL hasRuntimeEncoding;
@property (retain, nonatomic) NSData *runtimeEncoding;
@property (readonly, nonatomic) BOOL hasEventDescription;
@property (retain, nonatomic) NSString *eventDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
