@class NSData, NSString, NSDate;

@interface SPUISUserIntentResultBuilder : SPUISResultBuilder

@property (nonatomic) BOOL isBackgroundRunnable;
@property (retain, nonatomic) NSData *userActivityData;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) NSString *intentName;
@property (retain, nonatomic) NSString *punchoutLabel;
@property (retain, nonatomic) NSString *userActivityRequiredString;

+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildDescriptions;
- (id)buildResult;
- (id)buildThumbnail;

@end
