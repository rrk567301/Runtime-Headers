@class NSArray, NSDate;

@interface CPLResetTracker : NSObject <NSSecureCoding>

@property (class, readonly) CPLResetTracker *currentTracker;
@property (class, readonly) NSArray *currentReasonDescriptions;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *resetReasons;
@property (readonly, nonatomic) NSDate *earliestReasonDate;
@property (readonly, nonatomic) NSDate *likelyResetDate;
@property (readonly, nonatomic) BOOL hasReasons;

+ (BOOL)shouldIgnoreDefaultsCPLKey:(id)a0;
+ (void)discardTracker:(id)a0;
+ (void)initialize;
+ (void)registerLikelyResetReason:(id)a0;
+ (void)_storeReasonsLocked;
+ (void)discardTentativeResetReason:(id)a0;
+ (void)registerLikelyResetReason:(id)a0 arguments:(char *)a1;
+ (id)registerTentativeResetReasonIfCrashing:(id)a0;
+ (void)_registerReasonLocked:(id)a0;

- (id)initWithResetReasons:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)likelyResetReasonWithImmediateReason:(id)a0;
- (void).cxx_destruct;

@end
