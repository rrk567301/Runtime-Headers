@class NSString, NSData;

@interface _MRMicrophoneConnectionResponseMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char result : 1; } _has;
}

@property (nonatomic) BOOL hasResult;
@property (nonatomic) int result;
@property (readonly, nonatomic) BOOL hasRapportIdentifier;
@property (retain, nonatomic) NSString *rapportIdentifier;
@property (readonly, nonatomic) BOOL hasPairingData;
@property (retain, nonatomic) NSData *pairingData;

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
- (id)resultAsString:(int)a0;
- (int)StringAsResult:(id)a0;

@end
