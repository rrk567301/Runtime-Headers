@class NSData, NSString;

@interface WFFilesystemTrigger : WFTrigger

@property (copy, nonatomic) NSData *editingBookmarkData;
@property (copy, nonatomic) NSData *executionBookmarkData;
@property (copy, nonatomic) NSString *trackedNodeIdentifier;
@property (copy, nonatomic) NSString *pathDescription;
@property (copy, nonatomic) NSString *targetName;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isUserInitiated;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)fileStateForURL:(id)a0;
+ (BOOL)isSupportedOnThisDevice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)suggestedActions;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedDescriptionWithConfigurationSummaryUsingShortForm:(BOOL)a0;
- (id)contentStateUsingURL:(id)a0 trackedNodeID:(id)a1;
- (BOOL)supportsDirectories;

@end
