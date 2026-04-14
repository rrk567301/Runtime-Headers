@class NSString, NSDictionary;

@interface SNPropertyStripInfo : SNDSPItemInfo {
    void /* unknown type, empty encoding */ path;
    void /* unknown type, empty encoding */ value;
    void /* unknown type, empty encoding */ resourcePath;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSDictionary *value;
@property (nonatomic, readonly) NSString *resourcePath;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
