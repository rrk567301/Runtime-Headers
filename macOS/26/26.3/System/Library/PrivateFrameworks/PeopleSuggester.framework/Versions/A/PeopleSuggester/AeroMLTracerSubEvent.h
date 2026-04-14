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

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearAttributes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)attributesCount;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;

@end
