@class NSString;

@interface ATXGlobalStateForTesting : NSObject

@property (nonatomic) BOOL testModeEnabled;
@property (retain, nonatomic) NSString *clipboardContentForTesting;

+ (id)sharedInstance;

- (void)setTestMode:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isTestModeEnabled;
- (id)clipBoardContentForTesting;
- (void)setClipBoardContentForTesting:(id)a0;

@end
