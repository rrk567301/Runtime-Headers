@class NSNumber, NSString;

@interface SSREnrollmentSamplingMetaData : NSObject

@property (readonly, nonatomic) NSNumber *selectionStatus;
@property (readonly, nonatomic) NSString *voiceProfileId;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSelectionStatus:(id)a0 voiceProfileId:(id)a1;

@end
