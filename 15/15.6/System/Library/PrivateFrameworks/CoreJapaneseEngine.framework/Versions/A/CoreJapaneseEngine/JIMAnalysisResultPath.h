@class NSString, NSArray, JIMTextTree;

@interface JIMAnalysisResultPath : NSObject {
    NSArray *_segments;
}

@property (readonly) void *mecabraCandidate;
@property char synthesizedPath;
@property (retain) NSString *modifiedReading;
@property (retain) NSString *modifiedSurface;
@property (retain) NSString *originalInputString;
@property char inputStringContainedSpaceChararacters;
@property char inputStringIsRomaji;
@property (retain, nonatomic) JIMTextTree *sourceTextTree;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)surface;
- (long long)weight;
- (char)isEmojiCandidate;
- (id)segments;
- (char)isBilingualCandidate;
- (char)isExtensionCandidate;
- (char)isFacemarkCandidate;
- (id)reading;
- (id)initWithMecabraCandidate:(void *)a0;
- (char)endingWithPunctuation;
- (char)isAutocorrectedCandidate;
- (char)isExactMatchedCandidate;
- (char)isLearningCandidate;
- (char)isOTACandidate;
- (id)rawReading;

@end
