@class NSDate;

@interface TUIAnalytics : NSObject

@property (retain, nonatomic) NSDate *timeConversationUIDisplayed;

- (id)init;
- (void).cxx_destruct;
- (void)ktConversationNoMatch:(char)a0;
- (void)ktInteraction:(id)a0;
- (void)ktMarkAsVerified:(char)a0 sasCodeGenerated:(char)a1 publicKeyVisible:(char)a2;

@end
