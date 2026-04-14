@class NSString, MCQuotaUsage;

@interface IMAPQuotaRoot : NSObject

@property (copy) NSString *name;
@property (retain) MCQuotaUsage *usage;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0;
- (id)init;
- (void)setUsageFromResponse:(id)a0;

@end
