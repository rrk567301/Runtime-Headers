@interface StatusMessageGenerator : NSObject

+ (id)statusMessageForHitTestResult:(id)a0 onPageWithURL:(id)a1 modifiers:(unsigned long long)a2 usingPrivateBrowsing:(BOOL)a3;
+ (id)statusMessageForMouseoverLink:(id)a0 onPageWithURL:(id)a1 frameExists:(BOOL)a2 targetFrameExists:(BOOL)a3 frameAndTargetFrameAreTheSame:(BOOL)a4 frameAndTargetFrameShareSamePage:(BOOL)a5 modifiers:(unsigned long long)a6 usingPrivateBrowsing:(BOOL)a7;

@end
