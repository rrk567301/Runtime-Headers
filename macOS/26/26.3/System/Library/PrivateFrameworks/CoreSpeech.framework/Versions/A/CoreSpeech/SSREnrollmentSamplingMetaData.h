@class NSNumber, NSString;

@interface SSREnrollmentSamplingMetaData : NSObject

@property (readonly, nonatomic) NSNumber *selectionStatus;
@property (readonly, nonatomic) NSString *voiceProfileId;

- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithSelectionStatus:(id)a0 voiceProfileId:(id)a1;

@end
