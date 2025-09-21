@interface G2PFactoredObjc : NSObject {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ g2p;
}

- (void)setup;
- (id)init;
- (void).cxx_destruct;
- (id)getPhrasePronounciationWithPhrase:(id)a0 wordSep:(id)a1 prefixWithPhrase:(BOOL)a2;
- (id)getPronounciationWithWord:(id)a0;

@end
