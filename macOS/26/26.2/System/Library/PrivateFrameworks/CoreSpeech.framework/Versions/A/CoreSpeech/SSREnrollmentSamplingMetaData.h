@class NSNumber, NSString;

@interface SSREnrollmentSamplingMetaData : NSObject

@property (readonly, nonatomic) NSNumber *selectionStatus;
@property (readonly, nonatomic) NSString *voiceProfileId;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithSelectionStatus:(id)a0 voiceProfileId:(id)a1;

@end
