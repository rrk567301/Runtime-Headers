@class NSXMLElement, NSXMLNode;

@interface PKDistributionScript : NSObject {
    NSXMLNode *_node;
    NSXMLElement *_addToParent;
    BOOL _useParentAsScriptParent;
}

- (void)dealloc;
- (id)description;
- (id)value;
- (void)setValue:(id)a0;
- (void)remove;
- (id)attributeName;
- (id)literalValue;
- (id)script;
- (void)setScript:(id)a0;
- (id)_initWithNode:(id)a0;
- (id)_initWithNode:(id)a0 addToParent:(id)a1;
- (id)_initWithExpression:(id)a0;
- (void)_setUseParentAsScriptParent:(BOOL)a0;
- (id)_scriptParent;
- (id)_forIdentifier;
- (void)_addToParentIfNeeded;
- (id)sourceURI;
- (id)sourceTextForEvaluation;

@end
