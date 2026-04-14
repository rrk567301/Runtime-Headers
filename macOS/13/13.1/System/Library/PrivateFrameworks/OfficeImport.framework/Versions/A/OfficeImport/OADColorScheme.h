@class NSString, NSMutableDictionary;

@interface OADColorScheme : NSObject <NSCopying> {
    NSMutableDictionary *mColors;
}

@property (copy, nonatomic) NSString *name;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (unsigned long long)colorCount;
- (id)colorForIndex:(int)a0;
- (void)addColor:(id)a0 index:(int)a1;
- (void)setColor:(id)a0 index:(int)a1;
- (void)validateColorScheme;

@end
