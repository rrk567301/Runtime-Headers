@class NSString, NSDictionary;

@interface SNAUStripInfo : SNDSPItemInfo {
    NSString *_path;
    NSDictionary *_value;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
