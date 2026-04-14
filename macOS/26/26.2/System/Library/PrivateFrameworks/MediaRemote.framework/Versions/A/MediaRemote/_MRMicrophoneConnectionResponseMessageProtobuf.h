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
- (int)StringAsResult:(id)a0;
- (id)resultAsString:(int)a0;

@end
