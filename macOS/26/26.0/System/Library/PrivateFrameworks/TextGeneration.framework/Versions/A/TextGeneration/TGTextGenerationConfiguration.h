@class NSUUID, TGTextGenerationDecodingPolicy, NSSet;

@interface TGTextGenerationConfiguration : NSObject <NSCopying, NSMutableCopying>

@property (class, readonly, copy) NSUUID *defaultConfigurationUUID;

@property (copy) TGTextGenerationDecodingPolicy *decodingPolicy;
@property (readonly, copy) NSSet *resources;
@property (readonly, copy) NSUUID *uuid;

+ (id)defaultConfiguration;
+ (id)createWithUUID:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (struct TGITextGenerationInferenceModelConfiguration { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x2; })modelConfiguration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 resources:(id)a1 decodingPolicy:(id)a2;

@end
