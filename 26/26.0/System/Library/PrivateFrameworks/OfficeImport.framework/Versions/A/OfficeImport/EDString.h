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

- (void)appendString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (BOOL)isEqualToString:(id)a0;
- (id)string;
- (void)setString:(id)a0;
- (id)init;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)firstFont;
- (void)setDoNotModify:(BOOL)a0;
- (id)firstRunEffects;
- (BOOL)areThereRuns;
- (id)firstRunFont;
- (id)initWithString:(id)a0 runs:(id)a1;
- (BOOL)isEqualToEDString:(id)a0;
- (id)phoneticInfo;
- (void)prependString:(id)a0;
- (void)removeCharacterAtIndex:(unsigned long long)a0;
- (void)removeCharactersInSet:(id)a0;
- (id)runs;
- (void)setPhoneticInfo:(id)a0;
- (void)setRuns:(id)a0;

@end
