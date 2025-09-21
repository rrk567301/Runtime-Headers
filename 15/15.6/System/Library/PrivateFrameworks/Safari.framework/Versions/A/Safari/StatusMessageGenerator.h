@interface StatusMessageGenerator : NSObject

+ (id)statusMessageForMouseoverLink:(id)a0 onPageWithURL:(id)a1 frame:(void *)a2 targetFrame:(void *)a3 modifiers:(unsigned long long)a4 usingPrivateBrowsing:(char)a5;
+ (id)statusMessageForMouseoverLink:(id)a0 onPageWithURL:(id)a1 frameExists:(char)a2 targetFrameExists:(char)a3 frameAndTargetFrameAreTheSame:(char)a4 frameAndTargetFrameShareSamePage:(char)a5 modifiers:(unsigned long long)a6 usingPrivateBrowsing:(char)a7;

@end
