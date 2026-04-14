@class NSString;

@interface AMSHardwareOffersConfig : NSObject

@property (nonatomic) BOOL isGroupingEnabled;
@property (copy, nonatomic) NSString *sheetURL;

- (void).cxx_destruct;
- (id)initWithIsGroupingEnabled:(BOOL)a0 sheetURL:(id)a1;

@end
