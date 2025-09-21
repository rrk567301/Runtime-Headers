@class NSString;

@interface MIPLibraryIdentifier : PBCodable <NSCopying> {
    struct { unsigned char libraryId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLibraryName;
@property (retain, nonatomic) NSString *libraryName;
@property (nonatomic) BOOL hasLibraryId;
@property (nonatomic) long long libraryId;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
