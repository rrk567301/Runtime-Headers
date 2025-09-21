@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackCommonCorrections : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_comments;
    NSMutableArray *_imageIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_comments : 1; unsigned char read_imageIds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasComments;
@property (retain, nonatomic) NSString *comments;
@property (retain, nonatomic) NSMutableArray *imageIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)imageIdType;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)imageIdAtIndex:(unsigned long long)a0;
- (void)addImageId:(id)a0;
- (void)clearImageIds;
- (void)clearUnknownFields:(char)a0;
- (unsigned long long)imageIdsCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
