@class NSString;

@interface ATXPBPredictionUserContext : PBCodable <NSCopying> {
    struct { unsigned char lastAppLaunchDate : 1; unsigned char lastUnlockDate : 1; } _has;
}

@property (nonatomic) char hasLastUnlockDate;
@property (nonatomic) double lastUnlockDate;
@property (readonly, nonatomic) char hasLastAppLaunch;
@property (retain, nonatomic) NSString *lastAppLaunch;
@property (nonatomic) char hasLastAppLaunchDate;
@property (nonatomic) double lastAppLaunchDate;
@property (readonly, nonatomic) char hasSecondMostRecentAppLaunch;
@property (retain, nonatomic) NSString *secondMostRecentAppLaunch;
@property (readonly, nonatomic) char hasLastAppActionLaunch;
@property (retain, nonatomic) NSString *lastAppActionLaunch;

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
