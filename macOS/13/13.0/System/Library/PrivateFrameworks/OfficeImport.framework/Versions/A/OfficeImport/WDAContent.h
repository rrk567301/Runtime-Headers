@class NSString, WDATextBox, WDAAnchor, OADDrawable;

@interface WDAContent : NSObject <OADClient, OADTextClient, OADLinkedTextClient> {
    WDATextBox *mTextBox;
    int mTextType;
}

@property (readonly, nonatomic) WDAAnchor *anchor;
@property (weak) OADDrawable *drawable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForType:(unsigned short)a0;

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)floating;
- (BOOL)isLinked;
- (BOOL)hasText;
- (BOOL)hasBounds;
- (id)textBox;
- (unsigned long long)linkedTextBoxSupport;
- (id)createAnchor;
- (void)clearAnchor;
- (id)createTextBoxWithDocument:(id)a0 textType:(int)a1;
- (void)setTextBox:(id)a0 document:(id)a1;
- (BOOL)isShape;
- (BOOL)isLine;
- (BOOL)isTopLevelObject;
- (void)setTextType:(int)a0;
- (int)textType;

@end
