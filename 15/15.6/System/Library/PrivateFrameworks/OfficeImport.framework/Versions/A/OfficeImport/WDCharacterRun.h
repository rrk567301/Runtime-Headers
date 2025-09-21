@class NSMutableString;

@interface WDCharacterRun : WDRunWithCharacterProperties {
    NSMutableString *mString;
    char mBinaryWriterContentFlag;
}

- (id)description;
- (id)string;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)appendString:(id)a0;
- (void)setString:(id)a0;
- (id)initWithParagraph:(id)a0;
- (int)runType;
- (char)binaryWriterContentFlag;
- (void)clearString;
- (void)copyPropertiesFrom:(id)a0;
- (id)initWithParagraph:(id)a0 string:(id)a1;
- (void)removeLastCharacter:(unsigned short)a0;
- (void)setBinaryWriterContentFlag:(char)a0;
- (void)setPropertiesForDocument;

@end
