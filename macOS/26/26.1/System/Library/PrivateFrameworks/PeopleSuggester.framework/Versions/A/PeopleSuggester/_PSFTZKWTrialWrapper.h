@class _PASLock, TRIClient;

@interface _PSFTZKWTrialWrapper : NSObject {
    _PASLock *_lock;
    _PASLock *_updateLock;
}

@property (readonly, nonatomic) TRIClient *triClient;

+ (id)sharedInstance;
+ (void)runWithData:(id /* block */)a0;
+ (void)runIfUpdated:(id /* block */)a0;

- (void)refresh;
- (void)flagAsUpdated;
- (void)flagAsSame;
- (void)runWithData:(id /* block */)a0;
- (long long)loadLevelAsInteractionModelTypeFromFactor:(id)a0 withDefault:(long long)a1;
- (void)loadFactors;
- (void).cxx_destruct;
- (void)runIfUpdated:(id /* block */)a0;
- (BOOL)loadLevelAsBooleanFromFactor:(id)a0 withDefault:(BOOL)a1;
- (id)init;
- (long long)loadLevelAsConfidenceCategoryFromFactor:(id)a0 withDefault:(long long)a1;

@end
