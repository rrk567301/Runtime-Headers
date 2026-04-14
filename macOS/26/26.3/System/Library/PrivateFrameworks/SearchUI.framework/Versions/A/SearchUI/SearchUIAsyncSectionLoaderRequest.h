@class NSString;

@interface SearchUIAsyncSectionLoaderRequest : NSObject

@property (retain) NSString *identifier;
@property (copy) id /* block */ computeBlock;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
