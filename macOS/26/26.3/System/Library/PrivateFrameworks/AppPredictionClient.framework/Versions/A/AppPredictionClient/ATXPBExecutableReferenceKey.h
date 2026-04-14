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

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
