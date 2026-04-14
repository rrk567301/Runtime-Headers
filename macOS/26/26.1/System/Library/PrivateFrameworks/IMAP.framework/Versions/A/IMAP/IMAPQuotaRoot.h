@class NSString, MCQuotaUsage;

@interface IMAPQuotaRoot : NSObject

@property (copy) NSString *name;
@property (retain) MCQuotaUsage *usage;

- (id)description;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setUsageFromResponse:(id)a0;

@end
