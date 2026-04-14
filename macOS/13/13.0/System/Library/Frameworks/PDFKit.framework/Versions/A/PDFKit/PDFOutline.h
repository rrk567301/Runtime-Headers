@class NSString, PDFDestination, PDFAction, PDFDocument, PDFOutlinePrivate;

@interface PDFOutline : NSObject {
    PDFOutlinePrivate *_private;
}

@property (readonly, weak, nonatomic) PDFDocument *document;
@property (readonly, nonatomic) PDFOutline *parent;
@property (readonly, nonatomic) unsigned long long numberOfChildren;
@property (readonly, nonatomic) unsigned long long index;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL isOpen;
@property (retain, nonatomic) PDFDestination *destination;
@property (retain, nonatomic) PDFAction *action;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)childAtIndex:(unsigned long long)a0;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (void)_setParent:(id)a0;
- (id)_next;
- (void)setDocument:(id)a0;
- (void)commonInit;
- (void)removeFromParent;
- (id)_previous;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithDictionary:(struct CGPDFDictionary { } *)a0 forDocument:(id)a1 parent:(id)a2;
- (void)_lazilyLoadChildren;
- (struct CGPDFDictionary { } *)_srcDictionaryRef;
- (void)invalidateDictionaryRef;
- (id)_childArray;
- (void)_removeChildAtIndex:(unsigned long long)a0;
- (BOOL)_addDestinationToDictionaryRef:(struct __CFDictionary { } *)a0;
- (void)_addActionToDictionaryRef:(struct __CFDictionary { } *)a0;
- (int)_openDescendantCount;
- (BOOL)_childDictionaryReferencesParent:(struct CGPDFDictionary { } *)a0;
- (id)_firstChild;
- (id)_lastChild;

@end
