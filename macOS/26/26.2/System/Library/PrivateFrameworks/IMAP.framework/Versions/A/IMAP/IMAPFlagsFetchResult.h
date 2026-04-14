@class NSArray;

@interface IMAPFlagsFetchResult : IMAPFetchResult

@property (copy, nonatomic) NSArray *flagsArray;
@property (readonly, nonatomic) long long messageFlags;

- (void).cxx_destruct;
- (id)description;

@end
