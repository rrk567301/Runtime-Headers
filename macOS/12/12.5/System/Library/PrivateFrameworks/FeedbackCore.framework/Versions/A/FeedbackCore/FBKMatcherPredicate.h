@class NSString, FBKFilePredicate, FBKFileMatcher;

@interface FBKMatcherPredicate : NSObject

@property (nonatomic, readonly) BOOL requiresRemote;
@property (nonatomic, readonly) BOOL isConfiguredWithDEBundleIdentifier;
@property (nonatomic, readonly) BOOL hasRegularExpression;
@property (nonatomic, readonly) NSString *deBundleIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) BOOL shouldAutoGather;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *hashingKey;
@property (nonatomic, readonly) long long hash;
@property (retain, nonatomic) FBKFileMatcher *fileMatcher;
@property (retain, nonatomic) FBKFilePredicate *filePredicate;
@property (nonatomic) BOOL isAdditional;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFileMatcher:(id)a0 filePredicate:(id)a1;
- (BOOL)collectsSameDiagnosticsAsOtherMatcher:(id)a0;

@end
