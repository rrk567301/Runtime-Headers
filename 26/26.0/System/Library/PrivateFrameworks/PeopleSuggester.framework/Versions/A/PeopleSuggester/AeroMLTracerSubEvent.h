@class NSString, NSMutableArray;

@interface AeroMLTracerSubEvent : PBCodable <NSCopying> {
    struct { unsigned char privatizedTimeStamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasPrivatizedTimeStamp;
@property (nonatomic) unsigned int privatizedTimeStamp;
@property (readonly, nonatomic) BOOL hasDetails;
@property (retain, nonatomic) NSString *details;
@property (retain, nonatomic) NSMutableArray *attributes;

+ (Class)attributesType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;

@end
