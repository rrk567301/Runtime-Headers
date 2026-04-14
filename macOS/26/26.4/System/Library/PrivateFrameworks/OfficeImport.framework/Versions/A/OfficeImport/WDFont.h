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
- (int)pitch;
- (id)name;
- (void)setPitch:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (void)setCharacterSet:(int)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (id)init;
- (id)alternateNames;
- (id)description;
- (int)fontFamily;
- (void)setFontFamily:(int)a0;
- (void)addAlternateName:(id)a0;
- (id)secondName;

@end
