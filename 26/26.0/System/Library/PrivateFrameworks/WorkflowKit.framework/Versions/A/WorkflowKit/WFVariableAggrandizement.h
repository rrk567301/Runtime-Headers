@class NSDictionary;

@interface WFVariableAggrandizement : NSObject

@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;
- (id)processedContentClasses:(id)a0;

@end
