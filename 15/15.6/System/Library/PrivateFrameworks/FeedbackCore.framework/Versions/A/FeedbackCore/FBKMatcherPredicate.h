@class NSString, FBKFileMatcher, FBKFilePredicate, NSDateComponentsFormatter;

@interface FBKMatcherPredicate : NSObject

@property (class, nonatomic, readonly) NSDateComponentsFormatter *shortestDateFormatter;
@property (class, nonatomic, readonly) NSDateComponentsFormatter *shortDateFormatter;

@property (nonatomic, readonly) NSString *localizedDataCollectedSummary;
@property (nonatomic, readonly) NSString *localizedDataCollectedExplanation;
@property (nonatomic, readonly) char hasCachedLocalizedDataFromExtension;
@property (nonatomic, readonly) char requiresRemote;
@property (nonatomic, readonly) char isConfiguredWithDEBundleIdentifier;
@property (nonatomic, readonly) char hasRegularExpression;
@property (nonatomic, readonly) NSString *deBundleIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) char shouldAutoGather;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, readonly) NSString *hashingKey;
@property (nonatomic, readonly) long long hash;
@property (retain, nonatomic) FBKFileMatcher *fileMatcher;
@property (retain, nonatomic) FBKFilePredicate *filePredicate;
@property (nonatomic) char isAdditional;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)collectsSameDiagnosticsAsOtherMatcher:(id)a0;
- (id)initWithFileMatcher:(id)a0 filePredicate:(id)a1;

@end
