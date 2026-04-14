@class NSArray;

@interface TSTGroupValueTuple : TSKSosBase <NSCopying> {
    NSArray *_groupValues;
    struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _groupValueUid;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _combinedCanonicalKeyStringAsUtf8;
}

@property (readonly, nonatomic) unsigned char numberOfLevels;

+ (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })groupValueUidForTuple:(id)a0 appendingTuple:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)locale;
- (id).cxx_construct;
- (id)initWithValues:(id)a0;
- (id)initWithValueArray:(id)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })groupValueUid;
- (void)updateWithDocumentRoot:(id)a0;
- (id)groupValueAtLevel:(unsigned char)a0;
- (id)canonicalKeyStringAtLevel:(unsigned char)a0;
- (id)initWithTSCEValues:(const void *)a0 locale:(id)a1;
- (const char *)combinedCanonicalKeyStringAsUtf8;
- (id)groupValueTupleByReplacingValue:(id)a0 atLevel:(unsigned char)a1;
- (id)groupValueTupleByAppendingValue:(id)a0;
- (id)groupValueTupleByAppendingTuple:(id)a0;
- (id)groupValueTupleByMergingTuple:(id)a0 toLevel:(unsigned char)a1;
- (id)groupValueTupleByRemovingValueAtLevel:(unsigned char)a0;
- (id)groupValueTupleByPromotingValueAtLevel:(unsigned char)a0 toLevel:(unsigned char)a1;
- (id)groupValueTupleByDemotingValueAtLevel:(unsigned char)a0 toLevel:(unsigned char)a1;
- (id)prefixTupleToLevel:(unsigned char)a0;

@end
