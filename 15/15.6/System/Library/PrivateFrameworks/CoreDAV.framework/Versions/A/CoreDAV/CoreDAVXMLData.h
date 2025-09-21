@class CoreDAVXMLData_Impl, NSMutableDictionary, NSData, NSMutableArray;

@interface CoreDAVXMLData : NSObject {
    CoreDAVXMLData_Impl *_dataImpl;
    char _docHasEnded;
    NSMutableDictionary *_seenURIsToPrefixes;
    NSMutableDictionary *_seenURIsToDepth;
    NSMutableArray *_elementStack;
}

@property (nonatomic) char shouldAddFormattingSpaces;
@property (readonly, nonatomic) NSData *data;

+ (char)string:(id)a0 isEqualToXmlCharString:(const char *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)appendElement:(id)a0 inNamespace:(id)a1 withStringContent:(id)a2 withAttributeNamesAndValues:(id)a3;
- (void)endElement:(id)a0 inNamespace:(id)a1;
- (void)startElement:(id)a0 inNamespace:(id)a1 withAttributeNamesAndValues:(id)a2;
- (void)startElement:(id)a0 inNamespace:(id)a1 withAttributes:(id)a2;
- (const char *)_prefixForNameSpace:(const char *)a0;
- (void)_startElement:(id)a0 inNamespace:(id)a1;
- (void)_startElement:(id)a0 inNamespace:(id)a1 withAttributeNamesAndValues:(id)a2 attributes:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
- (void)appendElement:(id)a0 inNamespace:(id)a1 withStringContentAsCDATA:(id)a2 withAttributeNamesAndValues:(id)a3;

@end
