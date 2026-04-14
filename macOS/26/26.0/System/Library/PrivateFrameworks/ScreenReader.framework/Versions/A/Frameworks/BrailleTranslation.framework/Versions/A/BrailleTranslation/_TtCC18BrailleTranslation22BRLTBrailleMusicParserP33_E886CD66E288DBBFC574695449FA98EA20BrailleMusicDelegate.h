@interface _TtCC18BrailleTranslation22BRLTBrailleMusicParserP33_E886CD66E288DBBFC574695449FA98EA20BrailleMusicDelegate : NSObject <NSXMLParserDelegate> {
    void /* unknown type, empty encoding */ composition;
    void /* unknown type, empty encoding */ currentMeasure;
    void /* unknown type, empty encoding */ currentNote;
    void /* unknown type, empty encoding */ currentStaff;
    void /* unknown type, empty encoding */ currentMetronomeMarking;
    void /* unknown type, empty encoding */ currentKeySignature;
    void /* unknown type, empty encoding */ currentTimeSignature;
    void /* unknown type, empty encoding */ needsEqualSign;
    void /* unknown type, empty encoding */ elementStack;
    void /* unknown type, empty encoding */ currentChord;
    void /* unknown type, empty encoding */ result;
}

- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (id)init;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void).cxx_destruct;

@end
