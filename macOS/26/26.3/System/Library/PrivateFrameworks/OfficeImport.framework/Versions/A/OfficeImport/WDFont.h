@class NSString, NSMutableArray;

@interface WDFont : NSObject <NSCopying> {
    NSString *mName;
    NSMutableArray *mAlternateNames;
    int mFontFamily;
    int mCharacterSet;
    int mPitch;
}

+ (int)cpFontClassFromWdFontFamily:(int)a0;

- (int)characterSet;
- (void)setPitch:(int)a0;
- (int)pitch;
- (id)description;
- (id)init;
- (id)initWithName:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)alternateNames;
- (void)setCharacterSet:(int)a0;
- (void)setName:(id)a0;
- (int)fontFamily;
- (void)setFontFamily:(int)a0;
- (void)addAlternateName:(id)a0;
- (id)secondName;

@end
