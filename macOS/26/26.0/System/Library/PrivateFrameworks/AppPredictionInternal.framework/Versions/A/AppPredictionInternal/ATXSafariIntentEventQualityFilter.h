@class ATXContextKitClient;

@interface ATXSafariIntentEventQualityFilter : NSObject

@property (readonly, nonatomic) ATXContextKitClient *ckClient;

- (id)initWithContextKitClient:(id)a0;
- (id)init;
- (BOOL)shouldAcceptSafariDonation:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldBlockURLForObjectionableContent:(id)a0;

@end
