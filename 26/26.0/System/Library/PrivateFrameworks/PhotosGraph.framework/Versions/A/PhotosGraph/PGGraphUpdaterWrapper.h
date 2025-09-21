@class PGGraphUpdater;

@interface PGGraphUpdaterWrapper : NSObject {
    PGGraphUpdater *_graphUpdater;
}

- (void).cxx_destruct;
- (id)initWithGraphManager:(id)a0;
- (void)applyChangesFromGraphUpdate:(id)a0 progressReporter:(id)a1 completionHandler:(id /* block */)a2;

@end
