@class NSNumber, NSString, NSDate;

@interface EDSearchableIndexClientState : NSObject {
    NSNumber *_transactionValue;
}

@property (nonatomic) long long transaction;
@property (readonly, nonatomic) NSNumber *transactionValue;
@property (retain, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSString *systemBuildVersion;

+ (id)clientStateFromData:(id)a0;
+ (id)clientState;
+ (id)transactionAttributeKey;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)archiveRepresentation;
- (id)description;
- (void)addTransactionValueToAttributeSet:(id)a0;
- (void).cxx_destruct;

@end
