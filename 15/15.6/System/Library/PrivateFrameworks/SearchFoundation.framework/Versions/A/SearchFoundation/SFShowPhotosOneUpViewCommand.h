@class NSData, NSString, NSArray, SFPerson, SFTopic, NSDictionary, SFCommandReference, SFPunchout, SFPhotosLibraryImage;

@interface SFShowPhotosOneUpViewCommand : SFCommand <SFShowPhotosOneUpViewCommand, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SFPhotosLibraryImage *photosLibraryImage;
@property (retain, nonatomic) SFPerson *matchedPerson;
@property (copy, nonatomic) NSArray *matchedScenes;
@property (copy, nonatomic) NSArray *matchedPeople;
@property (retain, nonatomic) SFPunchout *photoFilePunchout;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (copy, nonatomic) NSData *backendData;
@property (retain, nonatomic) SFCommandReference *commandReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;

@end
