@class NSArray, NSString, STMutableListData;

@interface STMutableDataAccessStatusDomainData : STDataAccessStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (readonly, copy, nonatomic) STMutableListData *attributionListData;
@property (copy, nonatomic) NSArray *dataAccessAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
