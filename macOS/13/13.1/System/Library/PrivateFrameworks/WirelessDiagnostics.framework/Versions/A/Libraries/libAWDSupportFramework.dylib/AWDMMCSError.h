@class NSString, NSMutableArray;

@interface AWDMMCSError : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasCode;
@property (nonatomic) int code;
@property (retain, nonatomic) NSMutableArray *underlyingErrors;

+ (Class)underlyingErrorsType;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnderlyingErrors;
- (void)addUnderlyingErrors:(id)a0;
- (unsigned long long)underlyingErrorsCount;
- (id)underlyingErrorsAtIndex:(unsigned long long)a0;

@end
