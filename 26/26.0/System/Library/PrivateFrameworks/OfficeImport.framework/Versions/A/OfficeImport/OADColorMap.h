@class NSMutableDictionary;

@interface OADColorMap : NSObject {
    NSMutableDictionary *mMappings;
}

- (BOOL)isEmpty;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addDefaultMappings:(BOOL)a0;
- (void)addMapping:(int)a0 index:(int)a1;
- (int)mappingForIndex:(int)a0;

@end
