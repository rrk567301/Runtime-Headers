@interface CKVAnalytics : NSObject

+ (void)sendDonateEvent:(unsigned short)a0 itemCount:(unsigned long long)a1 appId:(id)a2 reason:(unsigned short)a3 result:(char)a4;
+ (void)sendDonateVerification:(unsigned short)a0 isConsistent:(char)a1;

@end
