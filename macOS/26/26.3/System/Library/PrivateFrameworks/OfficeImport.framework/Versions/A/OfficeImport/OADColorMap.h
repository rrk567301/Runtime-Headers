@class NSMutableDictionary;

@interface OADColorMap : NSObject {
    NSMutableDictionary *mMappings;
}

- (BOOL)isEmpty;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addDefaultMappings:(BOOL)a0;
- (void)addMapping:(int)a0 index:(int)a1;
- (int)mappingForIndex:(int)a0;

@end
