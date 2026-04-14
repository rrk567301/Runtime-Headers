@class NSDictionary, NSMutableString, NSZipFileArchive, NSAttributedString, NSFileWrapper;

@interface NSWordMLWriter : NSObject {
    NSAttributedString *_attrStr;
    NSDictionary *_documentAttrs;
    NSMutableString *_documentStr;
    NSFileWrapper *_fileWrapper;
    NSZipFileArchive *_archive;
}

- (id)initWithAttributedString:(id)a0;
- (void)dealloc;
- (id)archive:(id)a0 propertiesForEntryName:(id)a1;
- (id)archive:(id)a0 contentsForEntryName:(id)a1;
- (id)fileWrapper;
- (id)_coreProperties;
- (id)_metaProperties;
- (id)XMLFormatData;
- (id)_appProperties;
- (void)_generateDocument;
- (BOOL)_isWordML;
- (void)_writeCharacterAttributes:(id)a0;
- (void)_writeDocumentAttributes;
- (void)_writeDocumentProperties;
- (void)_writeFonts;
- (void)_writeParagraphStyle:(id)a0;
- (id)docxFormatData;
- (void)setDocumentAttributes:(id)a0;
- (id)zipFileArchive;

@end
