@class NSString;

@interface HDCloudSyncCodableLog : PBCodable <NSCopying> {
    struct { unsigned char timeStamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimeStamp;
@property (nonatomic) double timeStamp;
@property (readonly, nonatomic) BOOL hasEvent;
@property (retain, nonatomic) NSString *event;

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
