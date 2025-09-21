@class NSString, EDPhoneticInfo, EDRunsCollection;

@interface EDString : NSObject <NSCopying, EDImmutableObject> {
    NSString *mString;
    EDRunsCollection *mRuns;
    EDPhoneticInfo *mPhoneticInfo;
    BOOL mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)string;
+ (id)edStringWithString:(id)a0;
+ (id)edStringWithString:(id)a0 runs:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)string;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)isEmpty;
- (void)appendString:(id)a0;
- (char)isEqualToString:(id)a0;
- (void)setString:(id)a0;
- (id)firstFont;
- (id)firstRunEffects;
- (void)setDoNotModify:(BOOL)a0;
- (BOOL)areThereRuns;
- (id)firstRunFont;
- (id)initWithString:(id)a0 runs:(id)a1;
- (char)isEqualToEDString:(id)a0;
- (id)phoneticInfo;
- (void)prependString:(id)a0;
- (void)removeCharacterAtIndex:(unsigned long long)a0;
- (void)removeCharactersInSet:(id)a0;
- (id)runs;
- (void)setPhoneticInfo:(id)a0;
- (void)setRuns:(id)a0;

@end
