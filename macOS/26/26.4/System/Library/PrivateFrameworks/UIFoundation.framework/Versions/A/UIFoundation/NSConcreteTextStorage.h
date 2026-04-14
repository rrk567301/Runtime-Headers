@class NSConcreteNotifyingMutableAttributedString;

@interface NSConcreteTextStorage : NSTextStorage {
    NSConcreteNotifyingMutableAttributedString *_contents;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
    struct { unsigned char _forceFixAttributes : 1; unsigned char _needLock : 1; unsigned char _lockInitialized : 1; unsigned char _inFixingAttributes : 1; unsigned int _reserved : 28; } _pFlags;
}

+ (unsigned long long)_writerCountTSDKey;

- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)removeAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_setAttributeFixingInProgress:(BOOL)a0;
- (id)initWithString:(id)a0;
- (void)_unlock;
- (BOOL)_attributeFixingInProgress;
- (id)initWithAttributedString:(id)a0;
- (BOOL)fixesAttributesLazily;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)a0;
- (BOOL)_forceFixAttributes;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)_setForceFixAttributes:(BOOL)a0;
- (void)addAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_initLocks;
- (BOOL)_mayRequireIntentResolution;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_lockForReading;
- (unsigned long long)length;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)init;
- (id)string;
- (void)_markIntentsResolved;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (Class)classForCoder;
- (void)dealloc;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;

@end
