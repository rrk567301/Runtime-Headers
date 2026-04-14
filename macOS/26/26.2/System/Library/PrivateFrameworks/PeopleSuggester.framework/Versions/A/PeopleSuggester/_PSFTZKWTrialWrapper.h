@class _PASLock, TRIClient;

@interface _PSFTZKWTrialWrapper : NSObject {
    _PASLock *_lock;
    _PASLock *_updateLock;
}

@property (readonly, nonatomic) TRIClient *triClient;

+ (id)sharedInstance;
+ (void)runIfUpdated:(id /* block */)a0;
+ (void)runWithData:(id /* block */)a0;

- (void)refresh;
- (void)runIfUpdated:(id /* block */)a0;
- (void)runWithData:(id /* block */)a0;
- (BOOL)loadLevelAsBooleanFromFactor:(id)a0 withDefault:(BOOL)a1;
- (long long)loadLevelAsInteractionModelTypeFromFactor:(id)a0 withDefault:(long long)a1;
- (void)flagAsSame;
- (void).cxx_destruct;
- (long long)loadLevelAsConfidenceCategoryFromFactor:(id)a0 withDefault:(long long)a1;
- (void)loadFactors;
- (void)flagAsUpdated;
- (id)init;

@end
