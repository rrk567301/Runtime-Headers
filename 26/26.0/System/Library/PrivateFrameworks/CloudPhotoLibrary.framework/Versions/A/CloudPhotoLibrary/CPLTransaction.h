@class NSString;

@interface CPLTransaction : NSObject {
    BOOL _dirty;
}

@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)transactions;
+ (void)beginTransactionWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;
+ (unsigned long long)transactionCount;
+ (id)newTransactionWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;
+ (void)endTransactionWithIdentifier:(id)a0;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;
- (void)endTransaction;
- (void).cxx_destruct;

@end
