@class NSDictionary;

@interface WFVariableAggrandizement : NSObject

@property (readonly, nonatomic) NSDictionary *dictionary;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)processedContentClasses:(id)a0;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;

@end
