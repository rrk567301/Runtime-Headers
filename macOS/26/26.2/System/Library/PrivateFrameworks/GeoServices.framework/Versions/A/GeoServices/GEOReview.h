@class PBDataReader, NSString, GEOUser, PBUnknownFields;

@interface GEOReview : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_languageCode;
    NSString *_partnersResourceUrl;
    double _reviewTime;
    GEOUser *_reviewer;
    double _score;
    NSString *_snippet;
    NSString *_uid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isChinaSuppressed;
    struct { unsigned char has_reviewTime : 1; unsigned char has_score : 1; unsigned char has_isChinaSuppressed : 1; unsigned char read_unknownFields : 1; unsigned char read_languageCode : 1; unsigned char read_partnersResourceUrl : 1; unsigned char read_reviewer : 1; unsigned char read_snippet : 1; unsigned char read_uid : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)init;
- (id)dictionaryRepresentation;

@end
