@class NSString, EDResources, EDCollection;

@interface EDPhoneticInfo : NSObject <NSCopying, EDImmutableObject> {
    EDResources *mResources;
    unsigned long long mFontIndex;
    NSString *mString;
    int mType;
    int mAlign;
    EDCollection *mRuns;
    BOOL mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)phoneticInfoWithResources:(id)a0;

- (void)appendString:(id)a0;
- (id)font;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)string;
- (int)type;
- (void)setFont:(id)a0;
- (void)setString:(id)a0;
- (void)setType:(int)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)align;
- (id)initWithResources:(id)a0;
- (void)setAlign:(int)a0;
- (void)setDoNotModify:(BOOL)a0;
- (unsigned long long)fontIndex;
- (BOOL)isEqualToEDPhoneticInfo:(id)a0;
- (void)prependString:(id)a0;
- (id)runs;
- (void)setFontIndex:(unsigned long long)a0;

@end
