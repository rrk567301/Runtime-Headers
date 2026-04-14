@class NSString, ICNFMCQuotaUsage;

@interface ICNFIMAPQuotaRoot : NSObject

@property (copy) NSString *name;
@property (retain) ICNFMCQuotaUsage *usage;

- (id)description;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setUsageFromResponse:(id)a0;

@end
