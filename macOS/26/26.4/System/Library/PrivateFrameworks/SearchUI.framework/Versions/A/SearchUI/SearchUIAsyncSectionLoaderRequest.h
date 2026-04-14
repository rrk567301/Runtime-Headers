@class NSString;

@interface SearchUIAsyncSectionLoaderRequest : NSObject

@property (retain) NSString *identifier;
@property (copy) id /* block */ computeBlock;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
