@class NSString, BRCItemID;

@interface BRCBounceIncident : NSObject

@property (retain, nonatomic) BRCItemID *itemID;
@property (nonatomic) int bounceReason;
@property (retain, nonatomic) NSString *lastEditorDeviceName;

- (void).cxx_destruct;
- (id)description;

@end
