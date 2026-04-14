@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { unsigned char _inverted : 1; unsigned char _builtin : 1; unsigned char _isCF : 1; unsigned int _reserved : 29; } _flags;
}

- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)replacementObjectForCoder:(id)a0;
- (unsigned long long)retainCount;
- (BOOL)isSupersetOfSet:(id)a0;
- (id)autorelease;
- (id)bitmapRepresentation;
- (BOOL)isEmpty;
- (oneway void)release;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)invertedSet;
- (BOOL)characterIsMember:(unsigned short)a0;
- (void)dealloc;
- (struct __CFCharacterSet { } *)_expandedCFCharacterSet;
- (void)_expandInverted;
- (id)initWithSet:(id)a0 options:(unsigned long long)a1;

@end
