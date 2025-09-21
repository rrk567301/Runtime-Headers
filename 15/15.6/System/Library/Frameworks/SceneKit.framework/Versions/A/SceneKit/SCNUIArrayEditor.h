@class NSString, NSArrayController, NSTableView, NSButton, NSObject;

@interface SCNUIArrayEditor : NSView {
    NSArrayController *_arrayController;
    NSObject *observer;
    NSString *arrayOwnerPath;
    NSString *observedKeyPath;
    NSString *propertyName;
    char _targetsProxy;
}

@property (retain, nonatomic) NSTableView *table;
@property (retain, nonatomic) NSButton *add;
@property (retain, nonatomic) NSButton *remove;
@property (retain, nonatomic) id representedObject;
@property (weak, nonatomic) id delegate;

+ (id)arrayEditor;

- (void).cxx_destruct;
- (void)remove:(id)a0;
- (void)add:(id)a0;
- (void)setup;
- (void)doubleClick:(id)a0;
- (void)SCNUI_unbindAll;
- (void)bindTo:(id)a0 withKeyPath:(id)a1 valueTransformerName:(id)a2;
- (void)didInstanciateNewElementInArray:(id)a0;

@end
