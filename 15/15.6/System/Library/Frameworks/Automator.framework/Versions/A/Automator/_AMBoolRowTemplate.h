@class NSString, NSPopUpButton;

@interface _AMBoolRowTemplate : NSPredicateEditorRowTemplate

@property (retain) NSPopUpButton *leftExpressionPopup;
@property (retain) NSPopUpButton *valuePopup;
@property char hasCreatedViews;
@property (copy) NSString *name;
@property (copy) NSString *keyPath;
@property (copy) NSString *valueName;
@property char value;

+ (id)templateWithName:(id)a0 andKeyPath:(id)a1 andValueName:(id)a2 andValue:(char)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setPredicate:(id)a0;
- (double)matchForPredicate:(id)a0;
- (id)predicateWithSubpredicates:(id)a0;
- (id)templateViews;
- (void)createViewsIfNecessary;
- (id)initTemplateWithName:(id)a0 andKeyPath:(id)a1 andValueName:(id)a2 andValue:(char)a3;

@end
