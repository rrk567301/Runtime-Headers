@class NSString;

@interface AWDHomeKitSignificantTimeEvent : PBCodable <NSCopying> {
    struct { unsigned char offsetPresent : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSignificantEvent;
@property (retain, nonatomic) NSString *significantEvent;
@property (nonatomic) BOOL hasOffsetPresent;
@property (nonatomic) BOOL offsetPresent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end
