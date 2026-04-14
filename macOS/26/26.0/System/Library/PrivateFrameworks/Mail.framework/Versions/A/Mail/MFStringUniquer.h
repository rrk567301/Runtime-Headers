@class NSMapTable;

@interface MFStringUniquer : NSObject {
    NSMapTable *_stringsTable;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyUniquedStringForIndex:(long long)a0;
- (void)setUniquedString:(id)a0 forIndex:(long long)a1;

@end
