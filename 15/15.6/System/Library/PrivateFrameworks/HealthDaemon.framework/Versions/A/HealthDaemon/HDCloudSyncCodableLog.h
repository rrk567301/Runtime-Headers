@class NSString;

@interface HDCloudSyncCodableLog : PBCodable <NSCopying> {
    struct { unsigned char timeStamp : 1; } _has;
}

@property (nonatomic) char hasTimeStamp;
@property (nonatomic) double timeStamp;
@property (readonly, nonatomic) char hasEvent;
@property (retain, nonatomic) NSString *event;

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
