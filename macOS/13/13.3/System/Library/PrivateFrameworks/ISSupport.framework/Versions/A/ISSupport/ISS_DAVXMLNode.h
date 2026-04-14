@class NSDictionary, NSMutableArray, NSString;

@interface ISS_DAVXMLNode : NSObject {
    NSMutableArray *_children;
    NSDictionary *_attributes;
    NSString *_content;
    NSString *_name;
    NSString *_localName;
    NSString *_namespace;
}

+ (id)collectionNode;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)name;
- (id)dataUsingEncoding:(unsigned long long)a0;
- (void)setAttributes:(id)a0;
- (id)attributes;
- (id)content;
- (void)addChild:(id)a0;
- (id)initWithName:(id)a0 attributes:(id)a1;
- (id)localName;
- (void)setContent:(id)a0;
- (id)_rawData;
- (id)textContent;
- (void)setLocalName:(id)a0;
- (unsigned int)childrenCount;
- (id)namespace;
- (void)setNamespace:(id)a0;
- (id)ISS_xmlStringWithBag:(id)a0;
- (id)childrenEnumerator;
- (id)simpleTraverseWithPath:(id)a0;
- (id)simpleTraverseWithPathArray:(id)a0 pos:(unsigned int)a1;

@end
