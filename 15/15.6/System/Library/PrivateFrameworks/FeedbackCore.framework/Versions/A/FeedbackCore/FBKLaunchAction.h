@class FBKBugFormStub, NSString, NSURL, NSSet, NSMutableDictionary, NSDictionary, FBKTeam, FBKSCustomBehavior, NSNumber;

@interface FBKLaunchAction : NSObject

@property (retain, nonatomic) NSDictionary *queryItemsFromURL;
@property (retain, nonatomic) NSString *shouldMakeVisibleFromURL;
@property (retain, nonatomic) NSString *isCaptiveFromURL;
@property (retain, nonatomic) NSString *shouldNotifyOnUploadFromURL;
@property (retain, nonatomic) NSNumber *bugformIDFromURL;
@property (retain, nonatomic) NSDictionary *questionAnswerPairsFromURL;
@property (retain, nonatomic) NSDictionary *questionAnswersPairsFromURLV2;
@property (retain, nonatomic) FBKSCustomBehavior *customBehavior;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSNumber *ffuID;
@property (retain, nonatomic) NSSet *extensions;
@property (retain, nonatomic) NSMutableDictionary *attachments;
@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) char launchesFeedback;
@property (readonly, nonatomic) char launchesBatchUI;
@property (readonly, nonatomic) char launchesSurvey;
@property (readonly, nonatomic) char launchesInbox;
@property (readonly, nonatomic) char comesFromFeedbackd;
@property (readonly, nonatomic) char isCaptive;
@property (readonly, nonatomic) char shouldMakeFBAVisible;
@property (readonly, nonatomic) char shouldUndoMakeFBAVisible;
@property (readonly, nonatomic) char shouldNotifyOnUpload;
@property (readonly, nonatomic) NSDictionary *questionAnswerPairs;
@property (readonly, nonatomic) NSNumber *bugFormID;
@property (readonly, nonatomic) NSString *configurationToken;
@property (readonly, nonatomic) NSString *loginToken;
@property (retain, nonatomic) NSString *formIdentifier;
@property (nonatomic) unsigned long long teamType;
@property (readonly, nonatomic) char isShowContentItemAction;
@property (retain, nonatomic) FBKBugFormStub *exactMatchFormStub;
@property (retain, nonatomic) FBKTeam *teamForExactMatchFormStub;
@property (readonly, nonatomic) char hasFormItemTatToFetch;
@property (readonly, nonatomic) char hasAttachments;
@property (readonly, nonatomic) char showsItem;

+ (id)hostBundleIdentifier;
+ (id)actionWithURL:(id)a0;
+ (id)formStubsWithIdentifier:(id)a0 bugFormStubs:(id)a1;
+ (id)mappingForBundleID:(id)a0;
+ (id)preferredTeamForLaunchAction:(id)a0 withFormStubs:(id)a1;
+ (id)urlSchemeForFeedbackID:(id)a0;
+ (id)validateURLSchemeFilePathsDictionary:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)addCustomBehavior:(id)a0;
- (void)findExactMatchFormStubAndTeamWithFormStubs:(id)a0;
- (char)handlesLogin;
- (char)hasPendingSysdiagnoseInAttachments;
- (char)isFFUAction;

@end
