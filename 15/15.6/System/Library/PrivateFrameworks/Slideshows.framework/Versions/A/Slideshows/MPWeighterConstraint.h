@class NSDictionary, NSString, NSArray;

@interface MPWeighterConstraint : NSObject {
    long long numOfImages;
    long long movieCount;
    char moviesOnly;
    char ignoreMovies;
    long long wideLandscape;
    long long square;
    long long landscape;
    long long portrait;
    long long hPanoramas;
    long long vPanoramas;
    long long supportsHPanoramas;
    long long supportsVPanoramas;
    long long supportsAllPanoramas;
    long long allPanoramas;
    char hasPanorama;
    char tagsOnSourceOnly;
    char shelf;
}

@property (retain, nonatomic) NSDictionary *nextConstraints;
@property (retain, nonatomic) NSString *presetID;
@property (retain, nonatomic) NSArray *maxAspectRatios;
@property (retain, nonatomic) NSArray *minAspectRatios;
@property (retain, nonatomic) NSArray *tags;

- (void)dealloc;
- (id)init;

@end
