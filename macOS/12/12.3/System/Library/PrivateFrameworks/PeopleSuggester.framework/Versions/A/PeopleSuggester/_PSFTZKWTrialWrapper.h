@class _PASLock, TRIClient;

@interface _PSFTZKWTrialWrapper : NSObject {
    _PASLock *_lock;
    _PASLock *_updateLock;
}

@property (readonly, nonatomic) TRIClient *triClient;

+ (id)sharedInstance;
+ (void)runWithData:(id /* block */)a0;
+ (void)runIfUpdated:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)refresh;
- (void)loadFactors;
- (void)runWithData:(id /* block */)a0;
- (void)runIfUpdated:(id /* block */)a0;
- (void)flagAsSame;
- (void)flagAsUpdated;
- (BOOL)loadLevelAsBooleanFromFactor:(id)a0 withDefault:(BOOL)a1;
- (long long)loadLevelAsConfidenceCategoryFromFactor:(id)a0 withDefault:(long long)a1;
- (long long)loadLevelAsInteractionModelTypeFromFactor:(id)a0 withDefault:(long long)a1;

@end
