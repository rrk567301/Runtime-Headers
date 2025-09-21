@class NSMutableString;

@interface WDCharacterRun : WDRunWithCharacterProperties {
    NSMutableString *mString;
    BOOL mBinaryWriterContentFlag;
}

- (void)appendString:(id)a0;
- (BOOL)isEmpty;
- (id)string;
- (void)setString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithParagraph:(id)a0;
- (int)runType;
- (BOOL)binaryWriterContentFlag;
- (void)clearString;
- (void)copyPropertiesFrom:(id)a0;
- (id)initWithParagraph:(id)a0 string:(id)a1;
- (void)removeLastCharacter:(unsigned short)a0;
- (void)setBinaryWriterContentFlag:(BOOL)a0;
- (void)setPropertiesForDocument;

@end
