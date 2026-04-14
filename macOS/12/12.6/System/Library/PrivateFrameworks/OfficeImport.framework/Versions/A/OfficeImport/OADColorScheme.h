@class NSString, NSMutableDictionary;

@interface OADColorScheme : NSObject <NSCopying> {
    NSMutableDictionary *mColors;
}

@property (copy, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)addColor:(id)a0 index:(int)a1;
- (unsigned long long)colorCount;
- (void)validateColorScheme;
- (id)colorForIndex:(int)a0;
- (void)setColor:(id)a0 index:(int)a1;

@end
