@class NSArray, NSMutableArray;
@protocol NSTextStorageObserving, NSTextStorageObservingPrivate, NSTextStorageDelegate;

@interface NSTextStorage : NSMutableAttributedString <NSSecureCoding> {
    long long _fontFixingDisabledCount;
    id<NSTextStorageObservingPrivate> _textStorageObserver;
    BOOL _shouldSetOriginalFontAttribute;
    Class _intentResolver;
    struct _NSRange { unsigned long long location; unsigned long long length; } _editedRange;
    long long _editedDelta;
    struct { unsigned char editedMask : 8; unsigned char postWillProcess : 1; unsigned char postDidProcess : 1; unsigned char  : 6; unsigned short disabled : 16; unsigned int  : 32; } _flags;
    NSMutableArray *_layoutManagers;
    id _sideData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL ensuresFixingAttributes;
@property BOOL ensuresFixingFontAttributes;
@property BOOL _isSwiftAttributedString;
@property (readonly, copy) NSArray *layoutManagers;
@property (readonly) unsigned long long editedMask;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } editedRange;
@property (readonly) long long changeInLength;
@property (weak) id<NSTextStorageDelegate> delegate;
@property (readonly) BOOL fixesAttributesLazily;
@property (weak) id<NSTextStorageObserving> textStorageObserver;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_fontSetChanged:(id)a0;

- (void)dealloc;
- (id)init;
- (void)finalize;
- (void)endEditing;
- (void)beginEditing;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)_intentResolver;
- (void)edited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2;
- (BOOL)_lockForReading;
- (void)addLayoutManager:(id)a0;
- (void)_setIntentResolver:(Class)a0;
- (void)fixFontAttributeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeLayoutManager:(id)a0;
- (id)cuiStyleEffects;
- (id)cuiCatalog;
- (void)_unlock;
- (BOOL)_isEditing;
- (void)coordinateAccess:(id /* block */)a0;
- (BOOL)_attributeFixingInProgress;
- (void)_setAttributeFixingInProgress:(BOOL)a0;
- (BOOL)_shouldSetOriginalFontAttribute;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_usesSimpleTextEffects;
- (void)_setUsesSimpleTextEffects:(BOOL)a0;
- (void)fontSetChanged;
- (void)processEditing;
- (BOOL)_lockForWriting;
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)a0;
- (void)coordinateReading:(id /* block */)a0;
- (void)_setForceFixAttributes:(BOOL)a0;
- (BOOL)_forceFixAttributes;
- (void)coordinateEditing:(id /* block */)a0;
- (void)setEditedMask:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeByEstimatingAttributeFixingForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)invalidateAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_notifyEdited:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 changeInLength:(long long)a2 invalidatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)setTextStorageController:(id)a0;
- (id)textStorageController;
- (void)_setShouldSetOriginalFontAttribute:(BOOL)a0;
- (BOOL)_shouldFixFontAttributes;
- (void)_fixAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_nsAttributedStringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
