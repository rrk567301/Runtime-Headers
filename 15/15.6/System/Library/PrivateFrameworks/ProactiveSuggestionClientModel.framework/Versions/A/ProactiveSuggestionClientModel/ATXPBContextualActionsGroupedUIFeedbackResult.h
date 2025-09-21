@class ATXPBProactiveSuggestionGroupedUIFeedbackResult;

@interface ATXPBContextualActionsGroupedUIFeedbackResult : PBCodable <NSCopying> {
    struct { unsigned char numManuallyAddedSteps : 1; unsigned char numShortcutsAtEnd : 1; unsigned char numShortcutsAtStart : 1; } _has;
}

@property (readonly, nonatomic) char hasGroupedUIFeedbackResults;
@property (retain, nonatomic) ATXPBProactiveSuggestionGroupedUIFeedbackResult *groupedUIFeedbackResults;
@property (nonatomic) char hasNumShortcutsAtStart;
@property (nonatomic) unsigned long long numShortcutsAtStart;
@property (nonatomic) char hasNumShortcutsAtEnd;
@property (nonatomic) unsigned long long numShortcutsAtEnd;
@property (nonatomic) char hasNumManuallyAddedSteps;
@property (nonatomic) unsigned long long numManuallyAddedSteps;

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
