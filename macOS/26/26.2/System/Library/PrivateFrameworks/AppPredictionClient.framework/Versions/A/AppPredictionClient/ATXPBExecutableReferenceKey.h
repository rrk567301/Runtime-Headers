@class ATXPBHeroAppPrediction, ATXPBInfoSuggestion, ATXPBLinkAction, NSString, NSMutableArray, ATXPBAction;

@interface ATXPBExecutableReferenceKey : PBCodable <NSCopying> {
    ATXPBAction *_executableAction;
    ATXPBHeroAppPrediction *_executableHeroApp;
    ATXPBInfoSuggestion *_executableInfoSuggestion;
    ATXPBLinkAction *_executableLinkAction;
    NSString *_executableString;
    int _executableType;
    NSMutableArray *_references;
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
