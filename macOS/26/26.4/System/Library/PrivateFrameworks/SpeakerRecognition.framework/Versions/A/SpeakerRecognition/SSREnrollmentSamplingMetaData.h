@class NSNumber, NSString;

@interface SSREnrollmentSamplingMetaData : NSObject

@property (readonly, nonatomic) NSNumber *selectionStatus;
@property (readonly, nonatomic) NSString *voiceProfileId;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithSelectionStatus:(id)a0 voiceProfileId:(id)a1;

@end
