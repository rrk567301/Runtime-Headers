@class NSDictionary, NSMutableString, NSZipFileArchive, NSAttributedString, NSFileWrapper;

@interface NSWordMLWriter : NSObject {
    NSAttributedString *_attrStr;
    NSDictionary *_documentAttrs;
    NSMutableString *_documentStr;
    NSFileWrapper *_fileWrapper;
    NSZipFileArchive *_archive;
}

- (void)dealloc;
- (id)initWithAttributedString:(id)a0;
- (id)archive:(id)a0 contentsForEntryName:(id)a1;
- (id)archive:(id)a0 propertiesForEntryName:(id)a1;
- (id)fileWrapper;
- (void)setDocumentAttributes:(id)a0;
- (id)docxFormatData;
- (id)XMLFormatData;
- (id)zipFileArchive;
- (BOOL)_isWordML;
- (void)_writeDocumentProperties;
- (void)_writeFonts;
- (void)_writeDocumentAttributes;
- (void)_writeParagraphStyle:(id)a0;
- (void)_writeCharacterAttributes:(id)a0;
- (id)_coreProperties;
- (id)_appProperties;
- (id)_metaProperties;
- (void)_generateDocument;

@end
