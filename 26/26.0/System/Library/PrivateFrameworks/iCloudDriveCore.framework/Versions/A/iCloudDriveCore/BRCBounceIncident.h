@class NSString, BRCItemID;

@interface BRCBounceIncident : NSObject

@property (retain, nonatomic) BRCItemID *itemID;
@property (nonatomic) int bounceReason;
@property (retain, nonatomic) NSString *lastEditorDeviceName;

- (id)description;
- (void).cxx_destruct;

@end
