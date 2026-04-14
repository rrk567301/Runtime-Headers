@class NSMutableString;

@interface WDCharacterRun : WDRunWithCharacterProperties {
    NSMutableString *mString;
    BOOL mBinaryWriterContentFlag;
}

- (id)description;
- (id)string;
- (void)appendString:(id)a0;
- (void)setString:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (BOOL)binaryWriterContentFlag;
- (void)setBinaryWriterContentFlag:(BOOL)a0;
- (void)setPropertiesForDocument;
- (void)clearString;
- (id)initWithParagraph:(id)a0 string:(id)a1;
- (void)copyPropertiesFrom:(id)a0;
- (id)initWithParagraph:(id)a0;
- (int)runType;
- (void)removeLastCharacter:(unsigned short)a0;

@end
