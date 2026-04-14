@interface SKAServerBag : NSObject

+ (id)logger;
+ (BOOL)presenceEnabledByServer;
+ (double)statusValidityForOffGridPayload;
+ (BOOL)presenceEnabledByServerForServiceIdentifier:(id)a0;
+ (BOOL)presenceReverseInviteEnabledByServer;
+ (unsigned long long)serverResponseInternalErrorRetryCount;
+ (BOOL)statusEnabledByServerForStatusTypeIdentifier:(id)a0;

@end
