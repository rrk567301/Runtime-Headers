@class INFERENCESchemaINFERENCEPrivatizedHistoryStats, NSData;

@interface INFERENCESchemaINFERENCEContactHandleSignalSet : SISchemaInstrumentationMessage {
    struct { unsigned char isSuggestedHandle : 1; unsigned char isFavorite : 1; unsigned char isQueryExactMatch : 1; unsigned char isQueryMatch : 1; unsigned char isPartialQueryValueMatch : 1; unsigned char isRecentInAnyGroup : 1; unsigned char isRecentInSameGroup : 1; unsigned char isPreferredType : 1; unsigned char isAllowedType : 1; unsigned char isFaceTimeable : 1; unsigned char isNotFaceTimeable : 1; } _has;
}

@property (nonatomic) char isSuggestedHandle;
@property (nonatomic) char hasIsSuggestedHandle;
@property (nonatomic) char isFavorite;
@property (nonatomic) char hasIsFavorite;
@property (nonatomic) char isQueryExactMatch;
@property (nonatomic) char hasIsQueryExactMatch;
@property (nonatomic) char isQueryMatch;
@property (nonatomic) char hasIsQueryMatch;
@property (nonatomic) char isPartialQueryValueMatch;
@property (nonatomic) char hasIsPartialQueryValueMatch;
@property (retain, nonatomic) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStats;
@property (nonatomic) char hasHistoryStats;
@property (nonatomic) char isRecentInAnyGroup;
@property (nonatomic) char hasIsRecentInAnyGroup;
@property (nonatomic) char isRecentInSameGroup;
@property (nonatomic) char hasIsRecentInSameGroup;
@property (nonatomic) char isPreferredType;
@property (nonatomic) char hasIsPreferredType;
@property (nonatomic) char isAllowedType;
@property (nonatomic) char hasIsAllowedType;
@property (nonatomic) char isFaceTimeable;
@property (nonatomic) char hasIsFaceTimeable;
@property (nonatomic) char isNotFaceTimeable;
@property (nonatomic) char hasIsNotFaceTimeable;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteHistoryStats;
- (void)deleteIsAllowedType;
- (void)deleteIsFaceTimeable;
- (void)deleteIsFavorite;
- (void)deleteIsNotFaceTimeable;
- (void)deleteIsPartialQueryValueMatch;
- (void)deleteIsPreferredType;
- (void)deleteIsQueryExactMatch;
- (void)deleteIsQueryMatch;
- (void)deleteIsRecentInAnyGroup;
- (void)deleteIsRecentInSameGroup;
- (void)deleteIsSuggestedHandle;
- (id)suppressMessageUnderConditions;

@end
