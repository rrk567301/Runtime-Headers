@class NSString, ISS_DAVXMLTree;

@interface ISS_DMTruthFeed : NSObject {
    ISS_DAVXMLTree *_xmlTree;
    NSString *_feedNamespace;
}

- (void)dealloc;
- (id)initWithData:(id)a0;
- (id)resources;
- (id)_resourceDictionaryFromXMLNode:(id)a0;

@end
