@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { unsigned char _inverted : 1; unsigned char _builtin : 1; unsigned char _isCF : 1; unsigned int _reserved : 29; } _flags;
}

- (id)invertedSet;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)_tryRetain;
- (id)autorelease;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (id)bitmapRepresentation;
- (id)replacementObjectForCoder:(id)a0;
- (BOOL)isEmpty;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (oneway void)release;
- (BOOL)characterIsMember:(unsigned short)a0;
- (void)dealloc;
- (unsigned long long)retainCount;
- (struct __CFCharacterSet { } *)_expandedCFCharacterSet;
- (void)_expandInverted;
- (id)initWithSet:(id)a0 options:(unsigned long long)a1;

@end
