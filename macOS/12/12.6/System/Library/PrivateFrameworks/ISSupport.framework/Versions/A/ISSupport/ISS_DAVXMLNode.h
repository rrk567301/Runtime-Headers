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

- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)name;
- (id)dataUsingEncoding:(unsigned long long)a0;
- (void)setAttributes:(id)a0;
- (id)attributes;
- (id)initWithName:(id)a0 attributes:(id)a1;
- (void)addChild:(id)a0;
- (id)localName;
- (void)setContent:(id)a0;
- (id)content;
- (id)_rawData;
- (id)textContent;
- (void)setLocalName:(id)a0;
- (void)setNamespace:(id)a0;
- (id)namespace;
- (unsigned int)childrenCount;
- (id)simpleTraverseWithPath:(id)a0;
- (id)childrenEnumerator;
- (id)ISS_xmlStringWithBag:(id)a0;
- (id)simpleTraverseWithPathArray:(id)a0 pos:(unsigned int)a1;

@end
