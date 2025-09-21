@class ATXPBPredictionDeviceStateContext, ATXPBPredictionAmbientLightContext, ATXPBPredictionLocationMotionContext, ATXPBPredictionTimeContext, ATXPBPredictionUserContext;

@interface ATXPBPredictionContext : PBCodable <NSCopying> {
    struct { unsigned char isOverridden : 1; } _has;
}

@property (nonatomic) char hasIsOverridden;
@property (nonatomic) char isOverridden;
@property (readonly, nonatomic) char hasDeviceStateContext;
@property (retain, nonatomic) ATXPBPredictionDeviceStateContext *deviceStateContext;
@property (readonly, nonatomic) char hasTimeContext;
@property (retain, nonatomic) ATXPBPredictionTimeContext *timeContext;
@property (readonly, nonatomic) char hasLocationMotionContext;
@property (retain, nonatomic) ATXPBPredictionLocationMotionContext *locationMotionContext;
@property (readonly, nonatomic) char hasAmbientLightContext;
@property (retain, nonatomic) ATXPBPredictionAmbientLightContext *ambientLightContext;
@property (readonly, nonatomic) char hasUserContext;
@property (retain, nonatomic) ATXPBPredictionUserContext *userContext;

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
