@class NSString, NSMutableArray;

@interface AWDSiriSession : PBCodable <NSCopying> {
    struct { unsigned char sessionEndTimestamp : 1; unsigned char sessionStartTimestamp : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasSessionStartTimestamp;
@property (nonatomic) unsigned long long sessionStartTimestamp;
@property (nonatomic) char hasSessionEndTimestamp;
@property (nonatomic) unsigned long long sessionEndTimestamp;
@property (readonly, nonatomic) char hasCompanionModel;
@property (retain, nonatomic) NSString *companionModel;
@property (readonly, nonatomic) char hasCompanionOS;
@property (retain, nonatomic) NSString *companionOS;
@property (retain, nonatomic) NSMutableArray *siriRequests;

+ (Class)siriRequestType;

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
- (void)addSiriRequest:(id)a0;
- (void)clearSiriRequests;
- (id)siriRequestAtIndex:(unsigned long long)a0;
- (unsigned long long)siriRequestsCount;

@end
