@class NSString, ICNFMCQuotaUsage;

@interface ICNFIMAPQuotaRoot : NSObject

@property (copy) NSString *name;
@property (retain) ICNFMCQuotaUsage *usage;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (id)description;
- (void)setUsageFromResponse:(id)a0;

@end
