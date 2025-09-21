@class NSString, NSMutableArray;

@interface AeroMLTracerSubEvent : PBCodable <NSCopying> {
    struct { unsigned char privatizedTimeStamp : 1; } _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasPrivatizedTimeStamp;
@property (nonatomic) unsigned int privatizedTimeStamp;
@property (readonly, nonatomic) char hasDetails;
@property (retain, nonatomic) NSString *details;
@property (retain, nonatomic) NSMutableArray *attributes;

+ (Class)attributesType;

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
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;

@end
