@class NSString;

@interface ATXPBContextHeuristicsEvent : PBCodable <NSCopying> {
    struct { unsigned char isStart : 1; } _has;
}

@property (readonly, nonatomic) char hasContextName;
@property (retain, nonatomic) NSString *contextName;
@property (nonatomic) char hasIsStart;
@property (nonatomic) char isStart;
@property (readonly, nonatomic) char hasContextType;
@property (retain, nonatomic) NSString *contextType;

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
