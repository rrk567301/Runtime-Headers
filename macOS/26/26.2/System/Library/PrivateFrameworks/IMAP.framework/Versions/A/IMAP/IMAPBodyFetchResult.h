@class NSString, NSData;

@interface IMAPBodyFetchResult : IMAPFetchResult

@property (readonly, copy, nonatomic) NSString *section;
@property (retain, nonatomic) NSData *fetchData;
@property (nonatomic) unsigned int startOffset;

- (void).cxx_destruct;
- (id)description;

@end
