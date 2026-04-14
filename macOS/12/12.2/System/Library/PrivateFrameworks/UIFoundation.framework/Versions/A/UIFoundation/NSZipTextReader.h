@class NSMutableDictionary, NSDictionary, NSData, NSZipFileArchive, NSMutableAttributedString;

@interface NSZipTextReader : NSObject {
    NSMutableAttributedString *_attrStr;
    NSMutableDictionary *_documentAttrs;
    NSZipFileArchive *_archive;
    NSDictionary *_options;
    NSData *_contentData;
    NSData *_wordData;
    NSData *_opfData;
    NSData *_smilData;
    NSData *_xmlData;
    long long _indexingLimit;
    long long _thumbnailLimit;
    long long _errorCode;
}

- (void)dealloc;
- (id)attributedString;
- (id)initWithArchive:(id)a0 options:(id)a1;
- (void)setMutableAttributedString:(id)a0;
- (id)documentAttributes;
- (id)initWithData:(id)a0 options:(id)a1;
- (void)_loadContentData;
- (void)_loadWordData;
- (void)_loadXMLData;
- (void)_load;
- (id)initWithPath:(id)a0 options:(id)a1;

@end
