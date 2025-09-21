@class NSString, HDCodableSample, NSData;

@interface HDCodableCDADocumentSample : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char omittedContent : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) char hasOmittedContent;
@property (nonatomic) int omittedContent;
@property (readonly, nonatomic) char hasDocumentData;
@property (retain, nonatomic) NSData *documentData;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasPatientName;
@property (retain, nonatomic) NSString *patientName;
@property (readonly, nonatomic) char hasAuthorName;
@property (retain, nonatomic) NSString *authorName;
@property (readonly, nonatomic) char hasCustodianName;
@property (retain, nonatomic) NSString *custodianName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsOmittedContent:(id)a0;
- (char)applyToObject:(id)a0;
- (id)omittedContentAsString:(int)a0;

@end
