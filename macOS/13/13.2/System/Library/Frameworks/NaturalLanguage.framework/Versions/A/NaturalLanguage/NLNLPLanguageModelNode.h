@class NSArray, NSMutableSet, NSMutableDictionary;

@interface NLNLPLanguageModelNode : NSObject {
    NSArray *_tokenIDs;
    NSMutableSet *_strings;
    NSMutableDictionary *_children;
}

+ (id)conditionalProbabilitiesForStrings:(id)a0 modelState:(void *)a1 copyRequired:(BOOL)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isLeaf;
- (id)treeDescription;
- (id)initWithTokenIDs:(id)a0;
- (id)_treeDescriptionWithPrefix:(id)a0;
- (void)_addString:(id)a0 tokenIDs:(id)a1;
- (void)_setProbability:(double)a0 dictionary:(id)a1;
- (void)_evaluateChildrenWithModelState:(void *)a0 copyRequired:(BOOL)a1 probability:(double)a2 dictionary:(id)a3;

@end
