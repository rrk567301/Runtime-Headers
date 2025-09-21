@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray, GDVUStreamingGallery;

@interface VCPVideoAnimalDetector : VCPVideoAnalyzer {
    NSDictionary *_results;
    NSArray *_existingAnimalprints;
    NSMutableArray *_allAnimalFaces;
    NSMutableArray *_allTorsos;
    NSMutableDictionary *_animalPrints;
    NSMutableDictionary *_animalPrintLabels;
    NSMutableDictionary *_torsoPrints;
    NSMutableDictionary *_faceRanges;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastDetection;
    GDVUStreamingGallery *_gallery;
}

- (id)results;
- (void).cxx_destruct;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 faces:(id)a1 torsos:(id)a2;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)clusterFaces;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withExistingAnimalprints:(id)a1;
- (float)minProcessTimeIntervalInSecs;
- (int)updateWithExistingAnimals;

@end
