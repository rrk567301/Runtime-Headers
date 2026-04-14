@class MSPDroppedPin;

@interface MSPPin : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDroppedPin;
@property (retain, nonatomic) MSPDroppedPin *droppedPin;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
