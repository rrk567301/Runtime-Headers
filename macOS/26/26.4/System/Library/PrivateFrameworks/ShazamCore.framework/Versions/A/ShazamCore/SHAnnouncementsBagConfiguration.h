@class NSDictionary, NSString;

@interface SHAnnouncementsBagConfiguration : NSObject

@property (readonly) NSDictionary *configuration;
@property (readonly, copy) NSString *trackPageEndpoint;
@property (readonly, copy) NSString *languageCode;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 languageCode:(id)a1;

@end
