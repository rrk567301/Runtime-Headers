@class ATXPBProactiveSuggestionScoreSpecification, ATXPBProactiveSuggestionUISpecification, NSString, ATXPBProactiveSuggestionClientModelSpecification, ATXPBProactiveSuggestionExecutableSpecification;

@interface ATXPBProactiveSuggestion : PBCodable <NSCopying> {
    ATXPBProactiveSuggestionClientModelSpecification *_clientModelSpecification;
    ATXPBProactiveSuggestionExecutableSpecification *_executableSpecification;
    ATXPBProactiveSuggestionScoreSpecification *_scoreSpecification;
    ATXPBProactiveSuggestionUISpecification *_uiSpecification;
    NSString *_uuidString;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
