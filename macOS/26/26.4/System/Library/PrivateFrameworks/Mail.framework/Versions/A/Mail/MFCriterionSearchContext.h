@class NSString, CSSuggestion;

@interface MFCriterionSearchContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) CSSuggestion *updatedSuggestion;
@property (readonly, copy, nonatomic) NSString *userTypedString;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, copy, nonatomic) NSString *queryID;
@property (readonly, nonatomic) BOOL hasContent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithUpdatedSuggestion:(id)a0 userTypedString:(id)a1 sessionID:(id)a2 queryID:(id)a3;

@end
