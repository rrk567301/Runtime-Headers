@class STUIDataAccessStatusDomainData;

@interface STUIDataAccessStatusDomain : STDataAccessStatusDomain

@property (readonly, copy, nonatomic) STUIDataAccessStatusDomainData *data;

+ (id)_dataForBaseData:(id)a0;

- (void)observeDataWithBlock:(id /* block */)a0;
- (void)observeData:(id /* block */)a0;

@end
