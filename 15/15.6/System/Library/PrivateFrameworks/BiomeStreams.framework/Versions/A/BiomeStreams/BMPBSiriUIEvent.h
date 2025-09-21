@class NSString;

@interface BMPBSiriUIEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char starting : 1; } _has;
}

@property (readonly, nonatomic) char hasSessionID;
@property (retain, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasViewMode;
@property (retain, nonatomic) NSString *viewMode;
@property (readonly, nonatomic) char hasDismissalReason;
@property (retain, nonatomic) NSString *dismissalReason;
@property (nonatomic) char hasStarting;
@property (nonatomic) char starting;
@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;

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
