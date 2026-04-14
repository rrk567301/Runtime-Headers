@class NSURL, NSString, NSDictionary, FBKCustomBehavior, NSSet, NSNumber, NSMutableDictionary;

@interface FBKLaunchAction : NSObject

@property (retain, nonatomic) NSDictionary *queryItemsFromURL;
@property (retain, nonatomic) NSString *shouldMakeVisibleFromURL;
@property (retain, nonatomic) NSString *isCaptiveFromURL;
@property (retain, nonatomic) NSString *shouldNotifyOnUploadFromURL;
@property (retain, nonatomic) NSNumber *bugformIDFromURL;
@property (retain, nonatomic) NSDictionary *questionAnswerPairsFromURL;
@property (retain, nonatomic) FBKCustomBehavior *customBehavior;
@property (retain) NSString *action;
@property (retain) NSString *bundleID;
@property (retain) NSString *currentBuild;
@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSNumber *ffuID;
@property (retain, nonatomic) NSSet *extensions;
@property (retain, nonatomic) NSMutableDictionary *attachments;
@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL launchesDraft;
@property (readonly, nonatomic) BOOL isCaptive;
@property (readonly, nonatomic) BOOL shouldMakeFBKVisible;
@property (readonly, nonatomic) BOOL shouldUndoMakeFBKVisible;
@property (readonly, nonatomic) BOOL shouldNotifyOnUpload;
@property (readonly, nonatomic) NSDictionary *questionAnswerPairs;
@property (readonly, nonatomic) NSNumber *bugFormID;
@property (readonly, nonatomic) NSString *configurationToken;
@property (readonly, nonatomic) NSString *loginToken;

+ (id)mappingForBundleID:(id)a0;
+ (id)actionWithURL:(id)a0;
+ (id)FBKBundleIdentifier;
+ (id)validateURLSchemeFilePathsDictionary:(id)a0;

- (id)description;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)handlesLogin;
- (BOOL)hasPendingSysdiagnoseInAttachments;
- (BOOL)isFFUAction;
- (void)addCustomBehavior:(id)a0;

@end
