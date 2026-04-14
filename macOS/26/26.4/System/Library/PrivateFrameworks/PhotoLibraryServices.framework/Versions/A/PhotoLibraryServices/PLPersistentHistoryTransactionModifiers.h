@interface PLPersistentHistoryTransactionModifiers : NSObject

@property (nonatomic) BOOL syncChangeMarker;
@property (nonatomic) int changeSource;
@property (nonatomic) BOOL nonCoalescing;
@property (readonly, nonatomic) BOOL isSyncable;

+ (id)transactionModifiersFromTransactionAuthor:(id)a0;
+ (id)transactionAuthorFromChangeSource:(int)a0 syncChangeMarker:(BOOL)a1;
+ (id)transactionAuthorFromChangeSource:(int)a0;
+ (id)transactionAuthorFromChangeSource:(int)a0 syncChangeMarker:(BOOL)a1 nonCoalescing:(BOOL)a2;

- (BOOL)updateFromTransactionAuthor:(id)a0;
- (id)_descriptionWithBuilder:(id)a0;
- (id)encodeAsTransactionAuthor;
- (id)initWithChangeSource:(int)a0 syncChangeMarker:(BOOL)a1 nonCoalescing:(BOOL)a2;
- (BOOL)isNonCoalescing;
- (id)_pl_prettyDescriptionWithIndent:(long long)a0;
- (id)init;
- (id)description;

@end
