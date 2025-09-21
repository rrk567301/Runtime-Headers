@class NSArray, NSDate;

@interface CPLResetTracker : NSObject <NSSecureCoding>

@property (class, readonly) CPLResetTracker *currentTracker;
@property (class, readonly) NSArray *currentReasonDescriptions;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *resetReasons;
@property (readonly, nonatomic) NSDate *earliestReasonDate;
@property (readonly, nonatomic) NSDate *likelyResetDate;
@property (readonly, nonatomic) char hasReasons;

+ (void)initialize;
+ (void)registerLikelyResetReason:(id)a0;
+ (void)discardTracker:(id)a0;
+ (void)_registerReasonLocked:(id)a0;
+ (void)_storeReasonsLocked;
+ (void)discardTentativeResetReason:(id)a0;
+ (void)registerLikelyResetReason:(id)a0 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
+ (id)registerTentativeResetReasonIfCrashing:(id)a0;
+ (char)shouldIgnoreDefaultsCPLKey:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResetReasons:(id)a0;
- (id)likelyResetReasonWithImmediateReason:(id)a0;

@end
