@class _CSVisualizer, NSLocale, NSAttributedString, NSMutableAttributedString;

@interface CSStoreAttributedStringWriter : NSObject {
    struct optional<CSStore2::AttributedStringWriter> { union { char __null_state_; struct AttributedStringWriter { void /* function */ **_vptr$AttributedStringWriter; unsigned long long _reserved[30]; struct Impl *_impl; } __val_; } ; BOOL __engaged_; } _writer;
    NSMutableAttributedString *_attributedString;
}

@property (retain) _CSVisualizer *visualizer;
@property BOOL elidesEmptyValues;
@property BOOL insertsNewlines;
@property (copy) NSLocale *locale;
@property (readonly, copy) NSAttributedString *attributedString;

+ (id)new;
+ (id)newWithStore:(struct __CSStore { } *)a0 buffer:(id)a1;
+ (id)separatorForTitle:(id)a0 separator:(char)a1;
+ (id)newWithBuffer:(id)a0;

- (void)write:(id)a0 platform:(unsigned int)a1;
- (void)write:(id)a0 directoryClass:(unsigned char)a1;
- (void)write:(id)a0 iNode:(unsigned long long)a1;
- (void)write:(id)a0 version:(struct LSVersionNumber { unsigned char x0[32]; })a1;
- (id)attributedString;
- (id)locale;
- (void)writeString:(id)a0;
- (void)setLocale:(id)a0;
- (void)write:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)write:(id)a0 interval:(double)a1;
- (void)write:(id)a0 stringID:(unsigned int)a1;
- (void)childUnit:(unsigned int)a0 unit:(unsigned int)a1;
- (void)withReferenceToUnit:(unsigned int)a0 unit:(unsigned int)a1 block:(id /* block */)a2;
- (void)beginBitfieldFlags:(id)a0;
- (void)beginFlags:(id)a0 flags:(unsigned long long)a1;
- (void)childUnit:(id)a0 table:(unsigned int)a1 unit:(unsigned int)a2;
- (void)endFlags;
- (void)flag:(unsigned long long)a0 name:(id)a1;
- (void)flag:(unsigned long long)a0 name:(id)a1 color:(unsigned int)a2;
- (id)link:(unsigned int)a0 unit:(unsigned int)a1;
- (id)link:(unsigned int)a0 unit:(unsigned int)a1 linkedText:(id)a2;
- (id)linkURL:(id)a0;
- (id)linkURL:(id)a0 linkedText:(id)a1;
- (void)missingFlag:(unsigned long long)a0 name:(id)a1;
- (void)missingFlag:(unsigned long long)a0 name:(id)a1 color:(unsigned int)a2;
- (void)setElidesEmptyValues:(BOOL)a0;
- (void)setInsertsNewlines:(BOOL)a0;
- (void)setVisualizer:(id)a0;
- (id)visualizer;
- (void)withAppliedAttribute:(id)a0 value:(id)a1 block:(id /* block */)a2;
- (void)withTextColor:(unsigned int)a0 backgroundColor:(unsigned int)a1 block:(id /* block */)a2;
- (void)withTextColor:(unsigned int)a0 block:(id /* block */)a1;
- (void)withWarningColors:(id /* block */)a0;
- (void)write:(id)a0 array:(id)a1;
- (void)write:(id)a0 arrayID:(unsigned int)a1;
- (void)write:(id)a0 arrayIDs:(const unsigned int *)a1 count:(unsigned int)a2;
- (void)write:(id)a0 arrayStringID:(unsigned int)a1;
- (void)write:(id)a0 bool:(BOOL)a1;
- (void)write:(id)a0 code:(unsigned int)a1;
- (void)write:(id)a0 format:(id)a1;
- (void)write:(id)a0 number:(id)a1;
- (void)write:(id)a0 string:(id)a1;
- (void)writeArray:(id)a0;
- (void)writeAttributedString:(id)a0;
- (void)writeFormat:(id)a0;
- (void)writeSeparator;
- (id)init:(struct __CSStore { } *)a0 outBuffer:(id)a1;
- (void)writeSeparator:(char)a0;
- (BOOL)insertsNewlines;
- (id)link:(unsigned int)a0 unit:(unsigned int)a1 linkedAttributedText:(id)a2;
- (BOOL)elidesEmptyValues;
- (id)link:(unsigned int)a0 unitID:(unsigned int)a1 linkedAttributedText:(id)a2;
- (id)linkURL:(id)a0 linkedAttributedText:(id)a1;
- (void)write:(id)a0 args:(char *)a1;
- (void)write:(id)a0 attributedString:(id)a1;
- (void)write:(id)a0 format:(id)a1 args:(char *)a2;
- (void)write:(id)a0 separator:(char)a1;
- (void)writeArrayID:(unsigned int)a0;
- (void)writeArrayIDs:(const unsigned int *)a0 count:(unsigned int)a1;
- (id)writeLink:(unsigned int)a0 unitID:(unsigned int)a1 linkedText:(id)a2;
- (void)writeNumber:(id)a0;
- (void)writeStringID:(unsigned int)a0;

@end
