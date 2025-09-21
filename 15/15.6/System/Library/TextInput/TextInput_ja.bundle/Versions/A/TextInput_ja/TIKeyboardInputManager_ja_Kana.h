@class NSDictionary;

@interface TIKeyboardInputManager_ja_Kana : TIKeyboardInputManager_ja {
    char _is3x3;
    char _isFlickOnly;
    char _knowInputMode;
    char _knowHardwareMode;
    char _knowSplitMode;
    NSDictionary *_kanaFlickDirectionMap_current;
    NSDictionary *_kanaFlickKeyMap_current;
}

@property (nonatomic) char supportsFlickAutocorrection;
@property (retain, nonatomic) NSDictionary *kanaFlickDirectionMap_3x3;
@property (retain, nonatomic) NSDictionary *kanaFlickDirectionMap_50on;
@property (retain, nonatomic) NSDictionary *kanaFlickKeyMap_3x3;
@property (retain, nonatomic) NSDictionary *kanaFlickKeyMap_50on;

+ (Class)wordSearchClass;

- (void).cxx_destruct;
- (void)setInHardwareKeyboardMode:(char)a0;
- (void)setInSplitKeyboardMode:(char)a0;
- (void)addInput:(id)a0 withContext:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })analysisStringRange;
- (void)deleteFromInputWithContext:(id)a0;
- (id)geometryModelData;
- (id)keyboardConfigurationLayoutTag;
- (char)needsTouchEvents;
- (void)syncToLayoutState:(id)a0;
- (id)validCharacterSetForAutocorrection;
- (void)_deleteFromInput;
- (void)buildFlickTables;
- (void)calculateGeometryForInput:(id)a0;
- (unsigned short)flickKeyForBaseKey:(unsigned short)a0 direction:(int)a1;
- (id)geometryDataWithSubstitutedMultitapKeys:(id)a0;
- (id)liveConversionTextInputManager;
- (void)resetWordSearchWithClass:(Class)a0;

@end
