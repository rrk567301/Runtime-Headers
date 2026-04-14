@class CAMediaTimingFunction;

@interface NSAnimationContext : NSObject

@property (class, readonly) NSAnimationContext *currentContext;

@property BOOL allowsAsynchronousAnimation;
@property double duration;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (copy) id /* block */ completionHandler;
@property BOOL allowsImplicitAnimation;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (void)activate;
+ (void)flush;
+ (void)beginGrouping;
+ (void)endGrouping;
+ (void)runAnimationGroup:(id /* block */)a0 completionHandler:(id /* block */)a1;
+ (void)runAnimationGroup:(id /* block */)a0;
+ (id)completionHandlerSuspension;
+ (void)_runWithPreCommitCompletionHandlerAnimationGroup:(id /* block */)a0 completionHandler:(id /* block */)a1;
+ (BOOL)_hasActiveGrouping;
+ (void)addCommitHandler:(id /* block */)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)init;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (BOOL)isActive;
- (void)beginPerformanceMeasurementForIdentifier:(id)a0;
- (void)endPerformanceMeasurementForIdentifier:(id)a0;
- (BOOL)isImplicit;
- (BOOL)isExplicit;

@end
