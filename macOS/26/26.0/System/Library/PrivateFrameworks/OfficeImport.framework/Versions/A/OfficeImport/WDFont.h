@class NSString, NSMutableArray;

@interface WDFont : NSObject <NSCopying> {
    NSString *mName;
    NSMutableArray *mAlternateNames;
    int mFontFamily;
    int mCharacterSet;
    int mPitch;
}

+ (int)cpFontClassFromWdFontFamily:(int)a0;

- (void)setPitch:(int)a0;
- (int)pitch;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)characterSet;
- (id)alternateNames;
- (void)setName:(id)a0;
- (id)init;
- (id)description;
- (id)name;
- (void)setCharacterSet:(int)a0;
- (id)initWithName:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)fontFamily;
- (void)setFontFamily:(int)a0;
- (void)addAlternateName:(id)a0;
- (id)secondName;

@end
