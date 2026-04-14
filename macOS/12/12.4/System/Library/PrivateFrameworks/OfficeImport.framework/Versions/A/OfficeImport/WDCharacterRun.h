@class NSMutableString;

@interface WDCharacterRun : WDRunWithCharacterProperties {
    NSMutableString *mString;
    BOOL mBinaryWriterContentFlag;
}

- (id)description;
- (id)string;
- (BOOL)isEmpty;
- (void)appendString:(id)a0;
- (void)setString:(id)a0;
- (void).cxx_destruct;
- (void)copyPropertiesFrom:(id)a0;
- (int)runType;
- (BOOL)binaryWriterContentFlag;
- (void)setBinaryWriterContentFlag:(BOOL)a0;
- (void)removeLastCharacter:(unsigned short)a0;
- (id)initWithParagraph:(id)a0;
- (void)setPropertiesForDocument;
- (void)clearString;
- (id)initWithParagraph:(id)a0 string:(id)a1;

@end
