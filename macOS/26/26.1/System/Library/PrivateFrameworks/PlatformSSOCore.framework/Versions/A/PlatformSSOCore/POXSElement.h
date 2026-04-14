@class NSString;

@interface POXSElement : NSObject

@property (readonly, copy, nonatomic) NSString *elementName;
@property (readonly, copy, nonatomic) NSString *namespaceURI;
@property (readonly, nonatomic) Class type;

- (void).cxx_destruct;
- (id)init;
- (id)initWithElementName:(id)a0 namespaceURI:(id)a1 type:(Class)a2;

@end
