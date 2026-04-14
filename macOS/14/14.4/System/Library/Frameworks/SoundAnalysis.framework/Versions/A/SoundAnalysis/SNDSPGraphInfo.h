@class NSString, NSArray, NSDictionary;

@interface SNDSPGraphInfo : SNDSPItemInfo {
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ includePaths;
    void /* unknown type, empty encoding */ substitutions;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSArray *includePaths;
@property (nonatomic, readonly) NSDictionary *substitutions;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
