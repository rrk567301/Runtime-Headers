@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { unsigned char _inverted : 1; unsigned char _builtin : 1; unsigned char _isCF : 1; unsigned int _reserved : 29; } _flags;
}

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (id)invertedSet;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (struct __CFCharacterSet { } *)_expandedCFCharacterSet;
- (id)bitmapRepresentation;
- (BOOL)characterIsMember:(unsigned short)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)initWithSet:(id)a0 options:(unsigned long long)a1;
- (void)_expandInverted;

@end
