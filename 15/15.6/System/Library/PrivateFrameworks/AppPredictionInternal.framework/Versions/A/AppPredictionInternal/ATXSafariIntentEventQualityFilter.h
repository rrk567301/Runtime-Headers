@class ATXContextKitClient;

@interface ATXSafariIntentEventQualityFilter : NSObject

@property (readonly, nonatomic) ATXContextKitClient *ckClient;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContextKitClient:(id)a0;
- (char)shouldAcceptSafariDonation:(id)a0;
- (char)shouldBlockURLForObjectionableContent:(id)a0;

@end
