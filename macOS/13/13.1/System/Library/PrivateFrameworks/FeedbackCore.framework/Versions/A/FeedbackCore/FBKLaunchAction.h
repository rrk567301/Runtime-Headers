@class FBKBugFormStub, NSString, NSURL, NSSet, NSMutableDictionary, NSDictionary, FBKTeam, NSNumber, FBKCustomBehavior;

@interface FBKLaunchAction : NSObject

@property (retain, nonatomic) NSDictionary *queryItemsFromURL;
@property (retain, nonatomic) NSString *shouldMakeVisibleFromURL;
@property (retain, nonatomic) NSString *isCaptiveFromURL;
@property (retain, nonatomic) NSString *shouldNotifyOnUploadFromURL;
@property (retain, nonatomic) NSNumber *bugformIDFromURL;
@property (retain, nonatomic) NSDictionary *questionAnswerPairsFromURL;
@property (retain, nonatomic) FBKCustomBehavior *customBehavior;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSNumber *ffuID;
@property (retain, nonatomic) NSSet *extensions;
@property (retain, nonatomic) NSMutableDictionary *attachments;
@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL launchesDraft;
@property (readonly, nonatomic) BOOL isCaptive;
@property (readonly, nonatomic) BOOL shouldMakeFBAVisible;
@property (readonly, nonatomic) BOOL shouldUndoMakeFBAVisible;
@property (readonly, nonatomic) BOOL shouldNotifyOnUpload;
@property (readonly, nonatomic) NSDictionary *questionAnswerPairs;
@property (readonly, nonatomic) NSNumber *bugFormID;
@property (readonly, nonatomic) NSString *configurationToken;
@property (readonly, nonatomic) NSString *loginToken;
@property (retain, nonatomic) NSString *formIdentifier;
@property (nonatomic) unsigned long long teamType;
@property (retain, nonatomic) FBKBugFormStub *exactMatchFormStub;
@property (retain, nonatomic) FBKTeam *teamForExactMatchFormStub;

+ (id)hostBundleIdentifier;
+ (id)actionWithURL:(id)a0;
+ (id)mappingForBundleID:(id)a0;
+ (id)validateURLSchemeFilePathsDictionary:(id)a0;
+ (id)urlSchemeForFeedbackID:(id)a0;
+ (id)formStubsWithIdentifier:(id)a0 bugFormStubs:(id)a1;
+ (id)preferredTeamForLaunchAction:(id)a0 withFormStubs:(id)a1;

- (id)description;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)handlesLogin;
- (BOOL)isFFUAction;
- (void)addCustomBehavior:(id)a0;
- (BOOL)hasPendingSysdiagnoseInAttachments;
- (void)findExactMatchFormStubAndTeamWithFormStubs:(id)a0;

@end
