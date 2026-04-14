@class CAMediaTimingFunction;

@interface NSAnimationContext : NSObject

@property (class, readonly) NSAnimationContext *currentContext;

@property (nonatomic) id /* block */ animationProvider;
@property BOOL allowsAsynchronousAnimation;
@property double duration;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (copy) id /* block */ completionHandler;
@property BOOL allowsImplicitAnimation;

+ (void)initialize;
+ (void)activate;
+ (void)beginGrouping;
+ (void)flush;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)_hasActiveGrouping;
+ (void)_runWithPreCommitCompletionHandlerAnimationGroup:(id /* block */)a0 completionHandler:(id /* block */)a1;
+ (void)addCommitHandler:(id /* block */)a0;
+ (id)completionHandlerSuspension;
+ (void)endGrouping;
+ (void)runAnimationGroup:(id /* block */)a0;
+ (void)runAnimationGroup:(id /* block */)a0 completionHandler:(id /* block */)a1;

- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)autorelease;
- (BOOL)isActive;
- (id)retain;
- (id)init;
- (BOOL)isExplicit;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)beginPerformanceMeasurementForIdentifier:(id)a0;
- (void)endPerformanceMeasurementForIdentifier:(id)a0;
- (BOOL)isImplicit;

@end
