@class NSMutableDictionary;

@interface OADColorMap : NSObject {
    NSMutableDictionary *mMappings;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (int)mappingForIndex:(int)a0;
- (void)addMapping:(int)a0 index:(int)a1;
- (void)addDefaultMappings:(BOOL)a0;

@end
