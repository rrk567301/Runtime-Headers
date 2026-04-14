@class NSData, CKDPPrivateSearchGetRequestPrivateSearchRequestParameters;

@interface CKDPPrivateSearchGetRequest : PBRequest <NSCopying> {
    struct { unsigned char request : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestParameters;
@property (retain, nonatomic) CKDPPrivateSearchGetRequestPrivateSearchRequestParameters *requestParameters;
@property (readonly, nonatomic) BOOL hasContinuation;
@property (retain, nonatomic) NSData *continuation;
@property (nonatomic) BOOL hasRequest;
@property (nonatomic) int request;

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsRequest:(id)a0;
- (void)clearOneofValuesForRequest;
- (id)requestAsString:(int)a0;

@end
