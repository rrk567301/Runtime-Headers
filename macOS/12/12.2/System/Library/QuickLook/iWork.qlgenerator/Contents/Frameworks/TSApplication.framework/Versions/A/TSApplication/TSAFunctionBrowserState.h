@class NSMutableArray;

@interface TSAFunctionBrowserState : TSPObject {
    NSMutableArray *mRecentFunctions;
    NSMutableArray *mBackFunctions;
    NSMutableArray *mForwardFunctions;
    unsigned short mCurrentFunction;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (unsigned short)forward;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (unsigned short)back;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)p_filterOutUnknownFunctions:(id)a0;
- (unsigned short)backByAmount:(unsigned long long)a0;
- (unsigned short)forwardByAmount:(unsigned long long)a0;
- (id)allBackFunctions;
- (id)allForwardFunctions;
- (unsigned short)currentFunction;
- (void)recordNavigationTo:(unsigned short)a0;
- (void)recordRecentFunction:(unsigned short)a0;
- (id)recentFunctions;

@end
