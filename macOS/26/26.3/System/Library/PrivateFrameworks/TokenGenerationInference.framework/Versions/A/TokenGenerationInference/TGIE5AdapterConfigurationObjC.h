@class NSString;

@interface TGIE5AdapterConfigurationObjC : NSObject {
    NSString *_description;
}

@property (readonly, copy) NSString *adapterType;
@property (readonly, copy) NSString *symbolName;
@property (readonly, copy) NSString *mutableWeightsFilePath;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (struct TGIE5AdapterConfiguration { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x0; } x2; })adapterConfiguration;
- (id)initWithAdapterType:(id)a0 symbolName:(id)a1 mutableWeightsFilePath:(id)a2;

@end
