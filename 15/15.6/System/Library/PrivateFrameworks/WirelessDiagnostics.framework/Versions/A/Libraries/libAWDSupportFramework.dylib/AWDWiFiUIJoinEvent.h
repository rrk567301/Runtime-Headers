@class NSString, NSMutableArray;

@interface AWDWiFiUIJoinEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char error : 1; unsigned char securityType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasProcess;
@property (retain, nonatomic) NSString *process;
@property (nonatomic) char hasSecurityType;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) char hasError;
@property (nonatomic) unsigned int error;
@property (readonly, nonatomic) char hasSection;
@property (retain, nonatomic) NSString *section;
@property (retain, nonatomic) NSMutableArray *sectionCounts;

+ (Class)sectionCountsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSectionCounts:(id)a0;
- (void)clearSectionCounts;
- (id)sectionCountsAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionCountsCount;

@end
