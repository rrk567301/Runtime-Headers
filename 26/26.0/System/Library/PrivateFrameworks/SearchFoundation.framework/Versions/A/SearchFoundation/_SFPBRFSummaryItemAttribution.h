@class NSData, _SFPBRFTextProperty, NSString;

@interface _SFPBRFSummaryItemAttribution : PBCodable <_SFPBRFSummaryItemAttribution, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBRFTextProperty *text;
@property (retain, nonatomic) _SFPBRFTextProperty *text_compact;
@property (retain, nonatomic) _SFPBRFTextProperty *text_minimal;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
