@class NSString, NSArray, JIMTextTree;

@interface JIMAnalysisResultPath : NSObject {
    NSArray *_segments;
}

@property (readonly) void *mecabraCandidate;
@property BOOL synthesizedPath;
@property (retain) NSString *modifiedReading;
@property (retain) NSString *modifiedSurface;
@property (retain) NSString *originalInputString;
@property BOOL inputStringContainedSpaceChararacters;
@property BOOL inputStringIsRomaji;
@property (retain, nonatomic) JIMTextTree *sourceTextTree;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)surface;
- (long long)weight;
- (BOOL)isEmojiCandidate;
- (id)segments;
- (BOOL)isFacemarkCandidate;
- (BOOL)isBilingualCandidate;
- (id)reading;
- (id)initWithMecabraCandidate:(void *)a0;
- (id)rawReading;
- (BOOL)endingWithPunctuation;
- (BOOL)isOTACandidate;
- (BOOL)isExactMatchedCandidate;
- (BOOL)isAutocorrectedCandidate;
- (BOOL)isLearningCandidate;

@end
