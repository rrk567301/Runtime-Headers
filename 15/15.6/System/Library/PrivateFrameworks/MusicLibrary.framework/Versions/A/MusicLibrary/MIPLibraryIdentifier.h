@class NSString;

@interface MIPLibraryIdentifier : PBCodable <NSCopying> {
    struct { unsigned char libraryId : 1; } _has;
}

@property (readonly, nonatomic) char hasLibraryName;
@property (retain, nonatomic) NSString *libraryName;
@property (nonatomic) char hasLibraryId;
@property (nonatomic) long long libraryId;

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
