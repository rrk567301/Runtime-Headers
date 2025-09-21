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

- (long long)weight;
- (id)segments;
- (void)dealloc;
- (id)surface;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmojiCandidate;
- (BOOL)isBilingualCandidate;
- (BOOL)isExtensionCandidate;
- (BOOL)isFacemarkCandidate;
- (id)reading;
- (id)initWithMecabraCandidate:(void *)a0;
- (BOOL)endingWithPunctuation;
- (BOOL)isAutocorrectedCandidate;
- (BOOL)isExactMatchedCandidate;
- (BOOL)isLearningCandidate;
- (BOOL)isOTACandidate;
- (id)rawReading;

@end
