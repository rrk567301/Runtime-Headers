@class NSString;

@interface AWDHomeKitSignificantTimeEvent : PBCodable <NSCopying> {
    struct { unsigned char offsetPresent : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSignificantEvent;
@property (retain, nonatomic) NSString *significantEvent;
@property (nonatomic) BOOL hasOffsetPresent;
@property (nonatomic) BOOL offsetPresent;

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
