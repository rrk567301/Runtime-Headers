@class NSString, ICNFMCQuotaUsage;

@interface ICNFIMAPQuotaRoot : NSObject

@property (copy) NSString *name;
@property (retain) ICNFMCQuotaUsage *usage;

- (id)description;
- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)setUsageFromResponse:(id)a0;

@end
