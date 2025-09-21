@class NSString;

@interface NSIndexPath : NSObject <_PASDistilledString, NSCopying, NSSecureCoding> {
    unsigned long long *_indexes;
    unsigned long long _length;
    unsigned long long _inlinePayload;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long length;

+ (id)bs_emptyPath;
+ (id)_pas_fromVersionString:(id)a0;
+ (id)_pas_fromVersionString:(id)a0 withExceptions:(BOOL)a1;
+ (id)_pas_fromVersionStringIfPossible:(id)a0;
+ (id)indexPath;
+ (void)initialize;
+ (id)indexPathWithIndex:(unsigned long long)a0;
+ (id)indexPathWithIndexes:(const unsigned long long *)a0 length:(unsigned long long)a1;

- (BOOL)bs_hasPrefix:(id)a0;
- (id)bs_indexPathByAddingPrefix:(id)a0;
- (id)bs_indexPathByRemovingFirstIndex;
- (id)bs_nearestCommonAncestorWithIndexPath:(id)a0;
- (id)bs_subpathFromPosition:(unsigned long long)a0;
- (id)bs_subpathWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_pas_asVersionString;
- (BOOL)_pas_isEqualToVersionString:(id)a0;
- (BOOL)_pas_isGreaterThanOrEqualToVersionString:(id)a0;
- (BOOL)_pas_isGreaterThanVersionString:(id)a0;
- (BOOL)_pas_isLessThanOrEqualToVersionString:(id)a0;
- (BOOL)_pas_isLessThanVersionString:(id)a0;
- (id)_pas_revivedString;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)getIndexes:(unsigned long long *)a0;
- (void)getIndexes:(unsigned long long *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexAtPosition:(unsigned long long)a0;
- (id)indexPathByAddingIndex:(unsigned long long)a0;
- (id)indexPathByRemovingLastIndex;
- (id)initWithIndexes:(const unsigned long long *)a0 length:(unsigned long long)a1;

@end
