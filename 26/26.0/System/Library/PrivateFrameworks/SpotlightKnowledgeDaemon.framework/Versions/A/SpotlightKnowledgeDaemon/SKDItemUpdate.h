@class NSDictionary, NSMutableDictionary;

@interface SKDItemUpdate : SKDBaseUpdate {
    NSMutableDictionary *_attributes;
}

@property (readonly, nonatomic) NSDictionary *attributes;

+ (id)invalidBundleUpdateForIdentifier:(id)a0 uniqueID:(id)a1;

- (void)setBundleID:(id)a0;
- (void)setUniqueID:(id)a0;
- (void).cxx_destruct;
- (void)addAttribute:(id)a0 value:(id)a1;
- (void)addAttributesFromDictionary:(id)a0;
- (void)setTextContentLength:(unsigned long long)a0;
- (void)setPipeline:(id)a0;
- (void)setKeyphrasesCount:(unsigned long long)a0;
- (id)initWithStatus:(unsigned char)a0 identifier:(id)a1 filePath:(id)a2;
- (id)initWithStatus:(unsigned char)a0 identifier:(id)a1 uniqueID:(id)a2 bundleID:(id)a3;
- (void)setTextContentLanguage:(id)a0;

@end
