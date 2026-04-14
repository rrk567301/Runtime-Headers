@class NSString, NSMutableDictionary;

@interface OADColorScheme : NSObject <NSCopying> {
    NSMutableDictionary *mColors;
}

@property (copy, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addColor:(id)a0 index:(int)a1;
- (void)setColor:(id)a0 index:(int)a1;
- (unsigned long long)colorCount;
- (id)colorForIndex:(int)a0;
- (void)validateColorScheme;

@end
