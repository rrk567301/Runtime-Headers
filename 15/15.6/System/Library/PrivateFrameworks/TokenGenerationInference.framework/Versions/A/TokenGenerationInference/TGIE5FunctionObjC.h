@class NSString;

@interface TGIE5FunctionObjC : NSObject <NSCopying> {
    NSString *_description;
}

@property (readonly, copy) NSString *name;
@property (readonly) long long queryLength;
@property (readonly) long long contextSize;
@property (readonly, copy) NSString *adapterType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct TGIE5Function { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; } x0; int x1; int x2; struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; } x1; } x0; BOOL x1; } x3; })e5Function;
- (id)initWithName:(id)a0 queryLength:(long long)a1 contextSize:(long long)a2 adapterType:(id)a3;

@end
