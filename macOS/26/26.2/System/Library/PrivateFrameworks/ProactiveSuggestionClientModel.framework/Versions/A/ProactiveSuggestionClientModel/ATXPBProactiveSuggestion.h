@class ATXPBProactiveSuggestionScoreSpecification, ATXPBProactiveSuggestionUISpecification, NSString, ATXPBProactiveSuggestionClientModelSpecification, ATXPBProactiveSuggestionExecutableSpecification;

@interface ATXPBProactiveSuggestion : PBCodable <NSCopying> {
    ATXPBProactiveSuggestionClientModelSpecification *_clientModelSpecification;
    ATXPBProactiveSuggestionExecutableSpecification *_executableSpecification;
    ATXPBProactiveSuggestionScoreSpecification *_scoreSpecification;
    ATXPBProactiveSuggestionUISpecification *_uiSpecification;
    NSString *_uuidString;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
