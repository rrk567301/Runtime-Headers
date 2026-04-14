@class NSArray;

@interface ICNFIMAPFlagsFetchResult : ICNFIMAPFetchResult

@property (copy, nonatomic) NSArray *flagsArray;
@property (readonly, nonatomic) unsigned int messageFlags;

- (void).cxx_destruct;
- (id)description;

@end
