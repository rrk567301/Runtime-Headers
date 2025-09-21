@interface PCPRolledLoiAnalytics : PBCodable <NSCopying> {
    struct { unsigned char isHome : 1; unsigned char isWork : 1; unsigned char loiIsMissingFromCurrentVisitHistory : 1; } _has;
}

@property (nonatomic) BOOL hasLoiIsMissingFromCurrentVisitHistory;
@property (nonatomic) BOOL loiIsMissingFromCurrentVisitHistory;
@property (nonatomic) BOOL hasIsHome;
@property (nonatomic) BOOL isHome;
@property (nonatomic) BOOL hasIsWork;
@property (nonatomic) BOOL isWork;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
