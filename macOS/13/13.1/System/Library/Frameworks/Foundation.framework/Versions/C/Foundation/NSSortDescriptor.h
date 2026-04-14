@class NSString;

@interface NSSortDescriptor : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _sortDescriptorFlags;
    NSString *_key;
    SEL _selector;
    id _selectorOrBlock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *key;
@property (readonly) BOOL ascending;
@property (readonly) SEL selector;
@property (readonly) id /* block */ comparator;
@property (readonly, retain) id reversedSortDescriptor;

+ (void)initialize;
+ (id)sortDescriptorWithKey:(id)a0 ascending:(BOOL)a1;
+ (id)sortDescriptorWithKey:(id)a0 ascending:(BOOL)a1 selector:(SEL)a2;
+ (id)sortDescriptorWithKey:(id)a0;
+ (id)sortDescriptorWithKey:(id)a0 ascending:(BOOL)a1 reverseNullOrder:(BOOL)a2;
+ (id)sortDescriptorWithKey:(id)a0 ascending:(BOOL)a1 comparator:(id /* block */)a2;
+ (id)_defaultSelectorName;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)initWithKey:(id)a0;
- (id)initWithKey:(id)a0 ascending:(BOOL)a1;
- (id)initWithKey:(id)a0 ascending:(BOOL)a1 comparator:(id /* block */)a2;
- (long long)compareObject:(id)a0 toObject:(id)a1;
- (id)initWithKey:(id)a0 ascending:(BOOL)a1 selector:(SEL)a2;
- (void)allowEvaluation;
- (id)initWithKey:(id)a0 ascending:(BOOL)a1 reverseNullOrder:(BOOL)a2;
- (id)initWithKey:(id)a0 ascending:(BOOL)a1 reverseNullOrder:(BOOL)a2 selector:(SEL)a3;
- (void)_disallowEvaluation;
- (void)_setKey:(id)a0;
- (void)_setAscending:(BOOL)a0;
- (void)setReverseNullOrder:(BOOL)a0;
- (BOOL)reverseNullOrder;
- (void)_setSelectorName:(id)a0;
- (id)_selectorName;
- (BOOL)_isEqualToSortDescriptor:(id)a0;

@end
