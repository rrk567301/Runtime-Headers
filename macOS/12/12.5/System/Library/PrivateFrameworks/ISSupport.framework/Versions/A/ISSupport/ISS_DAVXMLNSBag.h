@class NSMutableDictionary;

@interface ISS_DAVXMLNSBag : NSObject {
    NSMutableDictionary *tagMapping;
    NSMutableDictionary *_tagObjects;
    NSMutableDictionary *allNS;
    unsigned int nsCounter;
    void *reserved1;
}

+ (void)initialize;
+ (void)registerNSTags:(id)a0 withNamespace:(id)a1;
+ (id)_smartTagForTag:(id)a0;
+ (id)namespaceForTag:(id)a0;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)registerLocalNSTag:(id)a0 withNamespace:(id)a1;
- (id)tagForNSTag:(id)a0;
- (id)allXMLNSAttributes;

@end
