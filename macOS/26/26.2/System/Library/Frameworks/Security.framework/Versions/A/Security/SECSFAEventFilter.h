@class NSString;

@interface SECSFAEventFilter : PBCodable <NSCopying> {
    struct { unsigned char dropRate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEvent;
@property (retain, nonatomic) NSString *event;
@property (nonatomic) BOOL hasDropRate;
@property (nonatomic) long long dropRate;

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
