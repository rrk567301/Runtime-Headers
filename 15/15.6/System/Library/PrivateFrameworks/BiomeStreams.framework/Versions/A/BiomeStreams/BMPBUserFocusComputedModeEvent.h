@class NSString;

@interface BMPBUserFocusComputedModeEvent : PBCodable <NSCopying> {
    struct { unsigned char modeSemanticType : 1; unsigned char modeUpdateReason : 1; unsigned char modeUpdateSource : 1; unsigned char starting : 1; } _has;
}

@property (readonly, nonatomic) char hasMode;
@property (retain, nonatomic) NSString *mode;
@property (nonatomic) char hasStarting;
@property (nonatomic) char starting;
@property (nonatomic) char hasModeUpdateReason;
@property (nonatomic) int modeUpdateReason;
@property (nonatomic) char hasModeSemanticType;
@property (nonatomic) int modeSemanticType;
@property (nonatomic) char hasModeUpdateSource;
@property (nonatomic) int modeUpdateSource;
@property (readonly, nonatomic) char hasSemanticModeIdentifier;
@property (retain, nonatomic) NSString *semanticModeIdentifier;

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
- (int)StringAsModeSemanticType:(id)a0;
- (int)StringAsModeUpdateReason:(id)a0;
- (int)StringAsModeUpdateSource:(id)a0;
- (id)modeSemanticTypeAsString:(int)a0;
- (id)modeUpdateReasonAsString:(int)a0;
- (id)modeUpdateSourceAsString:(int)a0;

@end
