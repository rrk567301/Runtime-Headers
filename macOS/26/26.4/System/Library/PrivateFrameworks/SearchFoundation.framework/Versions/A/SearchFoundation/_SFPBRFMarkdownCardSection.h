@class NSArray, NSDictionary, NSData, NSString;

@interface _SFPBRFMarkdownCardSection : PBCodable <_SFPBRFMarkdownCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *markdown_strings;
@property (copy, nonatomic) NSDictionary *markdown_data;
@property (nonatomic) int streaming_state;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addMarkdown_strings:(id)a0;
- (void)clearMarkdown_strings;
- (BOOL)getMarkdown_data:(id *)a0 forKey:(id)a1;
- (id)markdown_stringsAtIndex:(unsigned long long)a0;
- (unsigned long long)markdown_stringsCount;
- (void)setMarkdown_data:(id)a0 forKey:(id)a1;

@end
