@class NSString, NSMutableSet;

@interface SRNamespaceType : NSObject

@property (copy, nonatomic) NSString *namespaceName;
@property (copy, nonatomic) NSString *namespaceId;
@property (copy, nonatomic) NSMutableSet *parameterNames;

- (void).cxx_destruct;
- (id)init;
- (void)addParameterName:(id)a0;

@end
