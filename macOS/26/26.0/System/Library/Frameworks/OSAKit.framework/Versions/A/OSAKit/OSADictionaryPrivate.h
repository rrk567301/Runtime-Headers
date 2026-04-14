@class NSString, NSMutableDictionary, NSData, NSMutableArray;

@interface OSADictionaryPrivate : NSObject {
    NSData *_data;
    NSString *_html;
    NSMutableArray *_definitions;
    NSMutableArray *_suiteDefinitions;
    NSMutableArray *_classDefinitions;
    NSMutableDictionary *_definitionsByUniqueIdentifier;
    BOOL _parsed;
    NSString *_language;
}

@property (copy) NSString *language;

- (void)dealloc;
- (void)setData:(id)a0;
- (id)init;
- (id)definitions;
- (id)data;
- (id)html;
- (void)setHtml:(id)a0;
- (void)setDefinitions:(id)a0;
- (BOOL)parsed;
- (id)classDefinitions;
- (id)definitionForUniqueIdentifier:(id)a0;
- (void)setClassDefinitions:(id)a0;
- (void)setDefinition:(id)a0 forUniqueIdentifier:(id)a1;
- (void)setParsed:(BOOL)a0;
- (void)setSuiteDefinitions:(id)a0;
- (id)suiteDefinitions;

@end
