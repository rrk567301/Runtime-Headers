@interface SKAServerBag : NSObject

+ (id)logger;
+ (double)statusValidityForOffGridPayload;
+ (char)presenceEnabledByServer;
+ (char)presenceEnabledByServerForServiceIdentifier:(id)a0;
+ (char)statusEnabledByServerForStatusTypeIdentifier:(id)a0;

@end
