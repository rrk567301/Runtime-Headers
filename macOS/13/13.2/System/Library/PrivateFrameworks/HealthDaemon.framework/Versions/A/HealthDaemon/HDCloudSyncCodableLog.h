@class NSString;

@interface HDCloudSyncCodableLog : PBCodable <NSCopying> {
    struct { unsigned char timeStamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimeStamp;
@property (nonatomic) double timeStamp;
@property (readonly, nonatomic) BOOL hasEvent;
@property (retain, nonatomic) NSString *event;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
