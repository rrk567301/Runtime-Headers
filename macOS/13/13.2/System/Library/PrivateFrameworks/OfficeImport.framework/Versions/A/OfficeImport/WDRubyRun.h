@class WDCharacterRun, WDRubyProperties;

@interface WDRubyRun : WDCharacterRun {
    WDCharacterRun *mPhoneticRun;
    WDRubyProperties *mRubyProperties;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithParagraph:(id)a0;
- (int)runType;
- (id)rubyProperties;
- (id)phoneticRun;
- (id)phoneticRunString;
- (void)setPhoneticRunString:(id)a0;
- (void)appendPhoneticRunString:(id)a0;
- (id)rubyBase;

@end
