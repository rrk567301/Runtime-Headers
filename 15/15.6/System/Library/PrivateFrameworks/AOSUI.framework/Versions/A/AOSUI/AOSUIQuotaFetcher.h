@class NSString;

@interface AOSUIQuotaFetcher : NSObject

@property (nonatomic) char fetched;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) char shouldShow;
@property (nonatomic) char serviceIsLimited;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)sharedFetcher:(id)a0;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)_fetchGeoInformation;

@end
