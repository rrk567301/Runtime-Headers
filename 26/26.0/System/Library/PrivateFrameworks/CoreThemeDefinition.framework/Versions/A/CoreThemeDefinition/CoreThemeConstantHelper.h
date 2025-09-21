@class NSString;

@interface CoreThemeConstantHelper : NSObject {
    unsigned long long _identifier;
    NSString *_label;
    NSString *_displayName;
}

+ (id)helperForStructAtIndex:(long long)a0 inAssociatedGlobalList:(void *)a1;

- (long long)identifier;
- (void)dealloc;
- (id)displayName;
- (id)label;
- (id)description;

@end
