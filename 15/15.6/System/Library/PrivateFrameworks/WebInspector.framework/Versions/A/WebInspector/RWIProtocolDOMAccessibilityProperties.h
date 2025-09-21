@class NSString, NSArray;

@interface RWIProtocolDOMAccessibilityProperties : RWIProtocolJSONObject

@property (nonatomic) char exists;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) int nodeId;
@property (copy, nonatomic) NSString *role;
@property (nonatomic) int activeDescendantNodeId;
@property (nonatomic) char busy;
@property (nonatomic) long long checked;
@property (copy, nonatomic) NSArray *childNodeIds;
@property (copy, nonatomic) NSArray *controlledNodeIds;
@property (nonatomic) long long current;
@property (nonatomic) char disabled;
@property (nonatomic) double headingLevel;
@property (nonatomic) double hierarchyLevel;
@property (nonatomic) char isPopUpButton;
@property (nonatomic) char expanded;
@property (copy, nonatomic) NSArray *flowedNodeIds;
@property (nonatomic) char focused;
@property (nonatomic) char ignored;
@property (nonatomic) char ignoredByDefault;
@property (nonatomic) long long invalid;
@property (nonatomic) char hidden;
@property (nonatomic) char liveRegionAtomic;
@property (copy, nonatomic) NSArray *liveRegionRelevant;
@property (nonatomic) long long liveRegionStatus;
@property (nonatomic) int mouseEventNodeId;
@property (copy, nonatomic) NSArray *ownedNodeIds;
@property (nonatomic) int parentNodeId;
@property (nonatomic) char pressed;
@property (nonatomic) char readonly;
@property (nonatomic) char required;
@property (nonatomic) char selected;
@property (copy, nonatomic) NSArray *selectedChildNodeIds;
@property (nonatomic) long long switchState;

- (id)initWithExists:(char)a0 label:(id)a1 nodeId:(int)a2 role:(id)a3;

@end
