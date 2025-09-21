@interface EDProtection : NSObject <NSCopying> {
    BOOL mHidden;
    BOOL mLocked;
}

+ (id)protectionWithHidden:(BOOL)a0 locked:(BOOL)a1;

- (BOOL)isLocked;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (BOOL)isHidden;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithHidden:(BOOL)a0 locked:(BOOL)a1;
- (BOOL)isEqualToProtection:(id)a0;

@end
