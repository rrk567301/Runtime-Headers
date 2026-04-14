@class _SFPBCoreSpotlightCopyItem, _SFPBImageCopyItem, _SFPBURLCopyItem, _SFPBContactCopyItem, NSData, NSString, _SFPBTextCopyItem;

@interface _SFPBCopyItem : PBCodable <_SFPBCopyItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBTextCopyItem *textCopyItem;
@property (retain, nonatomic) _SFPBCoreSpotlightCopyItem *spotlightCopyItem;
@property (retain, nonatomic) _SFPBImageCopyItem *imageCopyItem;
@property (retain, nonatomic) _SFPBContactCopyItem *contactCopyItem;
@property (retain, nonatomic) _SFPBURLCopyItem *urlCopyItem;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
