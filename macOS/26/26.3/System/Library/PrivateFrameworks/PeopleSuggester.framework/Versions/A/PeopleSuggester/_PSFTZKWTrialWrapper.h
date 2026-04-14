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
- (void)flagAsSame;
- (void)loadFactors;
- (id)init;
- (void)runIfUpdated:(id /* block */)a0;
- (void)flagAsUpdated;
- (void).cxx_destruct;
- (BOOL)loadLevelAsBooleanFromFactor:(id)a0 withDefault:(BOOL)a1;
- (void)runWithData:(id /* block */)a0;
- (long long)loadLevelAsConfidenceCategoryFromFactor:(id)a0 withDefault:(long long)a1;
- (long long)loadLevelAsInteractionModelTypeFromFactor:(id)a0 withDefault:(long long)a1;

@end
