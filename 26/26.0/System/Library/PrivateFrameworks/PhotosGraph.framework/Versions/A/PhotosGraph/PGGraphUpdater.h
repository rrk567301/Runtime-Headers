@class MAProgressReporter, NSError, PGGraphUpdate;

@interface PGGraphUpdater : NSObject {
    void /* unknown type, empty encoding */ graphManager;
}

- (id)init;
- (id)initWith:(id)a0;
- (void).cxx_destruct;
- (void)applyChangesFrom:(PGGraphUpdate *)a0 progressReporter:(MAProgressReporter *)a1 completionHandler:(void (^)(NSError *))a2;

@end
