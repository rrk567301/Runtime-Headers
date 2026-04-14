@class NSString, NSArray, NSDictionary;

@interface SNDSPGraphInfo : SNDSPItemInfo {
    NSString *_path;
    NSString *_text;
    NSArray *_includePaths;
    NSDictionary *_substitutions;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
