@class NSArray;

@interface CLSFaceInformation : NSObject

@property (readonly) double faceSize;
@property (readonly) double faceQuality;
@property (readonly) char isKnownPerson;
@property (readonly) char isHiddenPerson;
@property (readonly) unsigned char faceSizeIsGood : 2;
@property (readonly) unsigned char faceIsGood : 2;
@property (readonly) unsigned char faceIsOk : 2;
@property (readonly) NSArray *traits;

+ (id)_traitsFromTraitsPropertyListRepresentation:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_initWithFaceSize:(double)a0 faceQuality:(double)a1 isKnownPerson:(char)a2 isHiddenPerson:(char)a3 faceSizeIsGood:(char)a4 faceIsGood:(char)a5 faceIsOk:(char)a6 traits:(id)a7;
- (id)_propertyListRepresentationOfTraits;
- (id)initForHiddenPersonWithFaceSize:(double)a0 faceQuality:(double)a1 faceSizeIsGood:(char)a2 faceIsGood:(char)a3 faceIsOk:(char)a4 traits:(id)a5;
- (id)initForKnownPersonWithFaceSize:(double)a0 faceQuality:(double)a1 faceSizeIsGood:(char)a2 faceIsGood:(char)a3 faceIsOk:(char)a4 traits:(id)a5;
- (id)initForUnknownPersonWithFaceSize:(double)a0 faceQuality:(double)a1 faceSizeIsGood:(char)a2 faceIsGood:(char)a3 faceIsOk:(char)a4 traits:(id)a5;

@end
