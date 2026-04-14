@class NSArray, WBSCRDTPosition;

@interface _WBSCRDTPositionGeneratorStride : NSObject

@property (readonly, copy, nonatomic) NSArray *recordNames;
@property (readonly, copy, nonatomic) WBSCRDTPosition *beforePosition;
@property (readonly, copy, nonatomic) WBSCRDTPosition *afterPosition;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRecordNames:(id)a0 beforePosition:(id)a1 afterPosition:(id)a2;

@end
