@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { unsigned char _inverted : 1; unsigned char _builtin : 1; unsigned char _isCF : 1; unsigned int _reserved : 29; } _flags;
}

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (char)_tryRetain;
- (id)autorelease;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (char)isEmpty;
- (struct __CFCharacterSet { } *)_expandedCFCharacterSet;
- (id)bitmapRepresentation;
- (char)characterIsMember:(unsigned short)a0;
- (char)hasMemberInPlane:(unsigned char)a0;
- (id)invertedSet;
- (char)isSupersetOfSet:(id)a0;
- (char)longCharacterIsMember:(unsigned int)a0;
- (id)replacementObjectForCoder:(id)a0;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (void)_expandInverted;
- (id)initWithSet:(id)a0 options:(unsigned long long)a1;

@end
