@class NSString, TUHandle;

@interface CSDMessagingHandle : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) TUHandle *tuHandle;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) NSString *value;
@property (readonly, nonatomic) char hasIsoCountryCode;
@property (retain, nonatomic) NSString *isoCountryCode;
@property (readonly, nonatomic) char hasSiriDisplayName;
@property (retain, nonatomic) NSString *siriDisplayName;

+ (id)handleWithTUHandle:(id)a0;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
