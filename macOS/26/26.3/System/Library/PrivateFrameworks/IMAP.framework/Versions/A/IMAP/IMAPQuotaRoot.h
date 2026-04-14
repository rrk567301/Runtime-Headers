@class NSString, MCQuotaUsage;

@interface IMAPQuotaRoot : NSObject

@property (copy) NSString *name;
@property (retain) MCQuotaUsage *usage;

- (id)description;
- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)setUsageFromResponse:(id)a0;

@end
