@interface PLPersistentHistoryTransactionModifiers : NSObject

@property (nonatomic) char syncChangeMarker;
@property (nonatomic) int changeSource;
@property (nonatomic) char nonCoalescing;
@property (readonly, nonatomic) char isSyncable;

+ (id)transactionAuthorFromChangeSource:(int)a0;
+ (id)transactionAuthorFromChangeSource:(int)a0 syncChangeMarker:(char)a1;
+ (id)transactionAuthorFromChangeSource:(int)a0 syncChangeMarker:(char)a1 nonCoalescing:(char)a2;
+ (id)transactionModifiersFromTransactionAuthor:(id)a0;

- (id)description;
- (id)init;
- (id)_pl_prettyDescriptionWithIndent:(long long)a0;
- (char)isNonCoalescing;
- (id)_descriptionWithBuilder:(id)a0;
- (id)encodeAsTransactionAuthor;
- (id)initWithChangeSource:(int)a0 syncChangeMarker:(char)a1 nonCoalescing:(char)a2;
- (char)updateFromTransactionAuthor:(id)a0;

@end
