@class NSUUID, NSDictionary;

@interface HMIPersonsModelSummary : HMFObject

@property (readonly) NSUUID *sourceUUID;
@property (readonly, getter=isExternalLibrary) char externalLibrary;
@property (readonly) NSDictionary *faceCountsByPerson;

- (void).cxx_destruct;
- (id)initWithSourceUUID:(id)a0 externalLibrary:(char)a1 faceCountsByPerson:(id)a2;

@end
