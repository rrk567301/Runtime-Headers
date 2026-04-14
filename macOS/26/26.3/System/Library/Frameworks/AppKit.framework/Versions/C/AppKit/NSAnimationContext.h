@class CAMediaTimingFunction;

@interface NSAnimationContext : NSObject

@property (class, readonly) NSAnimationContext *currentContext;

@property (nonatomic) id /* block */ animationProvider;
@property BOOL allowsAsynchronousAnimation;
@property double duration;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (copy) id /* block */ completionHandler;
@property BOOL allowsImplicitAnimation;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (void)flush;
+ (void)activate;
+ (void)beginGrouping;
+ (BOOL)_hasActiveGrouping;
+ (void)_runWithPreCommitCompletionHandlerAnimationGroup:(id /* block */)a0 completionHandler:(id /* block */)a1;
+ (void)addCommitHandler:(id /* block */)a0;
+ (id)completionHandlerSuspension;
+ (void)endGrouping;
+ (void)runAnimationGroup:(id /* block */)a0;
+ (void)runAnimationGroup:(id /* block */)a0 completionHandler:(id /* block */)a1;

- (unsigned long long)retainCount;
- (id)autorelease;
- (id)retain;
- (BOOL)allowsWeakReference;
- (id)init;
- (BOOL)retainWeakReference;
- (BOOL)isExplicit;
- (BOOL)isActive;
- (oneway void)release;
- (void)beginPerformanceMeasurementForIdentifier:(id)a0;
- (void)endPerformanceMeasurementForIdentifier:(id)a0;
- (BOOL)isImplicit;

@end
