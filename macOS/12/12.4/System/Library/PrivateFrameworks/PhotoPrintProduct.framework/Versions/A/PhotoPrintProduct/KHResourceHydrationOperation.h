@class NSArray, NSProgress;

@interface KHResourceHydrationOperation : NSBlockOperation

@property BOOL internalIsCancelled;
@property (retain) NSArray *errors;
@property (retain, nonatomic) NSProgress *progress;
@property (copy) id /* block */ progressWasSetBlockDelegate;
@property (copy) id /* block */ errorsWereSetBlockDelegate;
@property (copy) id /* block */ cancelBlockDelegate;
@property (retain) id hydrationResult;
@property (retain) id hydrationResultActivity;

+ (id)themeHydrationOperationForProvider:(id)a0;
+ (id)projectCreationOperationWithInfo:(id)a0;
+ (id)printsPreparationOperation;
+ (BOOL)needsPrintsPreparationOperation;
+ (id)photoCachesWarmupOperationWithProject:(id)a0;

- (void).cxx_destruct;
- (void)cancel;

@end
