@interface ICAppearanceInfo : NSObject {
    unsigned long long _hash;
}

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) char isDark;

+ (id)appearanceInfoWithType:(unsigned long long)a0;
+ (void)enumerateAppearanceTypesUsingBlock:(id /* block */)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;

@end
