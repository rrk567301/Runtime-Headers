@class NSArray, NSString;

@interface NSHostedViewSceneAccessibilityTokens : NSObject <BSXPCAutoCoding>

@property (retain) NSArray *unorderedTokens;
@property (retain) NSArray *horizontalOrderedTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)membersForCoder;
- (void).cxx_destruct;

@end
