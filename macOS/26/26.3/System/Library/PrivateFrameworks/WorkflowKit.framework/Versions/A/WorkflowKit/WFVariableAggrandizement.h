@class NSDictionary;

@interface WFVariableAggrandizement : NSObject

@property (readonly, nonatomic) NSDictionary *dictionary;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;
- (id)processedContentClasses:(id)a0;

@end
