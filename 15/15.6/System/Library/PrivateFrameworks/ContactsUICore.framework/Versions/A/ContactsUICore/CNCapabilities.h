@class NSString;

@interface CNCapabilities : NSObject <CNCapabilities>

@property (readonly, nonatomic) char areTelephonyCallsSupported;
@property (readonly, nonatomic) char isiMessageSupported;
@property (readonly, nonatomic) char isFaceTimeVideoSupported;
@property (readonly, nonatomic) char isFaceTimeAudioSupported;
@property (readonly, nonatomic) char isPaySupported;
@property (readonly, nonatomic) char isExpanseSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)shouldUseLegacyMessages;


@end
