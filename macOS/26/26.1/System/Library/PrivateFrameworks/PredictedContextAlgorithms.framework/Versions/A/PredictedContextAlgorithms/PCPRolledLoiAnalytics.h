@interface PCPRolledLoiAnalytics : PBCodable <NSCopying> {
    struct { unsigned char isHome : 1; unsigned char isWork : 1; unsigned char loiIsMissingFromCurrentVisitHistory : 1; } _has;
}

@property (nonatomic) BOOL hasLoiIsMissingFromCurrentVisitHistory;
@property (nonatomic) BOOL loiIsMissingFromCurrentVisitHistory;
@property (nonatomic) BOOL hasIsHome;
@property (nonatomic) BOOL isHome;
@property (nonatomic) BOOL hasIsWork;
@property (nonatomic) BOOL isWork;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
