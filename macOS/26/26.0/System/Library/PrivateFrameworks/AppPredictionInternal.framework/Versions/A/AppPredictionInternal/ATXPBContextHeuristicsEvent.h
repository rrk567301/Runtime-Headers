@class NSString;

@interface ATXPBContextHeuristicsEvent : PBCodable <NSCopying> {
    struct { unsigned char isStart : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasContextName;
@property (retain, nonatomic) NSString *contextName;
@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL isStart;
@property (readonly, nonatomic) BOOL hasContextType;
@property (retain, nonatomic) NSString *contextType;

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
