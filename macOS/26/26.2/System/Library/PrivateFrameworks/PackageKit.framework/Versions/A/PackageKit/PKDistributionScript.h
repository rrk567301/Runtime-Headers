@class NSXMLElement, NSXMLNode;

@interface PKDistributionScript : NSObject {
    NSXMLNode *_node;
    NSXMLElement *_addToParent;
    BOOL _useParentAsScriptParent;
}

- (void)remove;
- (id)script;
- (void)setValue:(id)a0;
- (id)description;
- (void)setScript:(id)a0;
- (id)value;
- (void)dealloc;
- (id)attributeName;
- (id)literalValue;
- (void)_addToParentIfNeeded;
- (id)_forIdentifier;
- (id)_initWithExpression:(id)a0;
- (id)_initWithNode:(id)a0;
- (id)_initWithNode:(id)a0 addToParent:(id)a1;
- (id)_scriptParent;
- (void)_setUseParentAsScriptParent:(BOOL)a0;
- (id)sourceTextForEvaluation;
- (id)sourceURI;

@end
