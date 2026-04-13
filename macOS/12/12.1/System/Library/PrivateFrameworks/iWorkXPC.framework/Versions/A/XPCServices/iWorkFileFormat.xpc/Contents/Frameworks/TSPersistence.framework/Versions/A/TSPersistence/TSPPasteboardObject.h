@class NSArray, TSPObject;

@interface TSPPasteboardObject : TSPObject

@property (copy, nonatomic) NSArray *drawables;
@property (copy, nonatomic) NSArray *styles;
@property (retain, nonatomic) TSPObject *stylesheet;
@property (retain, nonatomic) TSPObject *wpStorage;
@property (retain, nonatomic) TSPObject *guideStorage;
@property (retain, nonatomic) NSArray *topLevelObjects;
@property (retain, nonatomic) TSPObject *appNativeObject;
@property (readonly, nonatomic) BOOL isCrossAppPaste;
@property (readonly, nonatomic) BOOL isCrossDocumentPaste;
@property (nonatomic) BOOL isTextPrimary;
@property (nonatomic) BOOL isSmartCopyPaste;
@property (retain, nonatomic) TSPObject *nativeContentDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)tsp_identifier;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
