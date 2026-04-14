@class NSString, CNGeminiResult, CNContact, CNGeminiManager;
@protocol CNUIGeminiDataSourceDelegate;

@interface CNUIGeminiDataSource : NSObject <CNGeminiManagerDelegate>

@property (retain, nonatomic) CNGeminiResult *geminiResult;
@property (nonatomic) BOOL substituteDanglingChannel;
@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSString *selectedChannelIdentifier;
@property (weak, nonatomic) id<CNUIGeminiDataSourceDelegate> delegate;
@property (readonly, nonatomic) CNGeminiManager *geminiManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetDataSource;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)channelsDidChangeForGeminiManager:(id)a0;
- (id)initWithGeminiManager:(id)a0;

@end
