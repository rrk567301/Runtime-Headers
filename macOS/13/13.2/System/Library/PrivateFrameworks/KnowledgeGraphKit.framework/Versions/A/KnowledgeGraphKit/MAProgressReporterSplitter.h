@class MAProgressReporter;

@interface MAProgressReporterSplitter : NSObject {
    MAProgressReporter *_progressReporter;
    double _previousCheckpoint;
}

- (void).cxx_destruct;
- (id)initWithProgressReporter:(id)a0;
- (id)childProgressReporterToCheckpoint:(double)a0;

@end
