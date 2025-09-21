@class NSData;

@interface PEGASUSSchemaPEGASUSSportsExecution : SISchemaInstrumentationMessage {
    struct { unsigned char sportsUsecase : 1; unsigned char isSportsWatchFaceRequest : 1; unsigned char isSnippetNextCardRequest : 1; unsigned char isMachineUtterance : 1; unsigned char isDisambiguation : 1; unsigned char isLiveScoreRequest : 1; } _has;
}

@property (nonatomic) int sportsUsecase;
@property (nonatomic) char hasSportsUsecase;
@property (nonatomic) char isSportsWatchFaceRequest;
@property (nonatomic) char hasIsSportsWatchFaceRequest;
@property (nonatomic) char isSnippetNextCardRequest;
@property (nonatomic) char hasIsSnippetNextCardRequest;
@property (nonatomic) char isMachineUtterance;
@property (nonatomic) char hasIsMachineUtterance;
@property (nonatomic) char isDisambiguation;
@property (nonatomic) char hasIsDisambiguation;
@property (nonatomic) char isLiveScoreRequest;
@property (nonatomic) char hasIsLiveScoreRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsDisambiguation;
- (void)deleteIsLiveScoreRequest;
- (void)deleteIsMachineUtterance;
- (void)deleteIsSnippetNextCardRequest;
- (void)deleteIsSportsWatchFaceRequest;
- (void)deleteSportsUsecase;
- (id)suppressMessageUnderConditions;

@end
