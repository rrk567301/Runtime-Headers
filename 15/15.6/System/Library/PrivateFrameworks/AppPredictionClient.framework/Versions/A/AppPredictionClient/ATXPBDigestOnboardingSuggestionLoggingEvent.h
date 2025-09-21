@class NSString;

@interface ATXPBDigestOnboardingSuggestionLoggingEvent : PBCodable <NSCopying> {
    struct { unsigned char timeToResolution : 1; unsigned char digestOnboardingSuggestionOutcome : 1; } _has;
}

@property (readonly, nonatomic) char hasSessionUUID;
@property (retain, nonatomic) NSString *sessionUUID;
@property (nonatomic) char hasDigestOnboardingSuggestionOutcome;
@property (nonatomic) int digestOnboardingSuggestionOutcome;
@property (nonatomic) char hasTimeToResolution;
@property (nonatomic) double timeToResolution;

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
- (int)StringAsDigestOnboardingSuggestionOutcome:(id)a0;
- (id)digestOnboardingSuggestionOutcomeAsString:(int)a0;

@end
