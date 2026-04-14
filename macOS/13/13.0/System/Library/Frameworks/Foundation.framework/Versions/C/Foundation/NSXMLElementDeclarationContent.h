@class NSString;

@interface NSXMLElementDeclarationContent : NSXMLNode {
    unsigned long long _contentKind;
    unsigned long long _occurrence;
    NSString *_name;
    NSXMLElementDeclarationContent *_leftChild;
    NSXMLElementDeclarationContent *_rightChild;
}

+ (id)createElementContent:(struct _xmlElementContent { int x0; int x1; char *x2; struct _xmlElementContent *x3; struct _xmlElementContent *x4; struct _xmlElementContent *x5; char *x6; } *)a0;
+ (id)createElementContentFromString:(id)a0;

- (void)dealloc;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setName:(id)a0;
- (void)_XMLStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)initWithContentKind:(unsigned long long)a0 occurrence:(unsigned long long)a1;
- (void)setLeftChild:(id)a0;
- (id)leftChild;
- (void)setRightChild:(id)a0;
- (id)rightChild;
- (unsigned long long)contentKind;
- (unsigned long long)occurrence;
- (void)XMLStringSequenceStarted:(BOOL)a0 choiceStarted:(BOOL)a1 appendingToString:(id)a2;
- (struct _xmlElementContent { int x0; int x1; char *x2; struct _xmlElementContent *x3; struct _xmlElementContent *x4; struct _xmlElementContent *x5; char *x6; } *)libxml2Content;

@end
