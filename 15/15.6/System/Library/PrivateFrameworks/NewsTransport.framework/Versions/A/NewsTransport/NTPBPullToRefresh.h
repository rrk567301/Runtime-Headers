@class NSString;

@interface NTPBPullToRefresh : PBCodable <NSCopying> {
    struct { unsigned char viewType : 1; } _has;
}

@property (nonatomic) char hasViewType;
@property (nonatomic) int viewType;
@property (readonly, nonatomic) char hasViewId;
@property (retain, nonatomic) NSString *viewId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsViewType:(id)a0;
- (id)viewTypeAsString:(int)a0;

@end
