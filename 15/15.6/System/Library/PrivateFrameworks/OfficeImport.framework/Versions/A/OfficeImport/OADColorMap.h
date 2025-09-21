@class NSMutableDictionary;

@interface OADColorMap : NSObject {
    NSMutableDictionary *mMappings;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)addDefaultMappings:(char)a0;
- (void)addMapping:(int)a0 index:(int)a1;
- (int)mappingForIndex:(int)a0;

@end
