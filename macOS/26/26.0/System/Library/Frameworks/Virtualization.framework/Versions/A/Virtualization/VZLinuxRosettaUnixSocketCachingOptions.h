@class NSString;

@interface VZLinuxRosettaUnixSocketCachingOptions : VZLinuxRosettaCachingOptions

@property (class, readonly) unsigned long long maximumPathLength;

@property (readonly, copy) NSString *path;

- (id)initWithPath:(id)a0 error:(id *)a1;
- (struct expected<VzCore::Hardware::DirectoryShares::Rosetta::CachingOptions, NSError *> { struct __conditional_no_unique_address<false, std::__expected_base<VzCore::Hardware::DirectoryShares::Rosetta::CachingOptions, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<true, std::__expected_base<VzCore::Hardware::DirectoryShares::Rosetta::CachingOptions, NSError *>::__union_t> { union __union_t { struct CachingOptions { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; BOOL x1; } x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })_options;
- (id)init;
- (void).cxx_destruct;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;

@end
