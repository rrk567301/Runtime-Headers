@class NSString;

@interface SECSFAEventFilter : PBCodable <NSCopying> {
    struct { unsigned char dropRate : 1; } _has;
}

@property (readonly, nonatomic) char hasEvent;
@property (retain, nonatomic) NSString *event;
@property (nonatomic) char hasDropRate;
@property (nonatomic) long long dropRate;

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
