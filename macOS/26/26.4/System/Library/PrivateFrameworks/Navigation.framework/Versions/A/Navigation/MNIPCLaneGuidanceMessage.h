@class NSUUID, NSArray;

@interface MNIPCLaneGuidanceMessage : MNIPCMessage

@property (copy, nonatomic) NSUUID *laneInfoId;
@property (copy, nonatomic) NSArray *lanes;
@property (nonatomic) BOOL isForManeuver;
@property (copy, nonatomic) NSArray *textAlternatives;
@property (copy, nonatomic) NSArray *midStepTitles;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryValue;

@end
