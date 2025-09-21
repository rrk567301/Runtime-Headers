@class NSData, NSString, NSDate;

@interface SSUserIntentResultBuilder : SSResultBuilder

@property (nonatomic) char isBackgroundRunnable;
@property (retain, nonatomic) NSData *userActivityData;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) NSString *intentName;
@property (retain, nonatomic) NSString *punchoutLabel;
@property (retain, nonatomic) NSString *userActivityRequiredString;

+ (char)supportsResult:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildDescriptions;
- (id)buildResult;
- (id)buildThumbnail;

@end
