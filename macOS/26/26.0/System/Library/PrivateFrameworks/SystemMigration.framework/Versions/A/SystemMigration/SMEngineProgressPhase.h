@class NSString;

@interface SMEngineProgressPhase : NSObject

@property (retain) NSString *identifier;
@property (retain) NSString *phaseDescription;
@property (retain) NSString *phaseSubDescription;
@property unsigned long long completedItems;
@property unsigned long long completedItemsSinceLastUpdate;
@property unsigned long long completedSize;
@property unsigned long long completedSizeSinceLastUpdate;
@property unsigned long long phaseTimeType;
@property unsigned long long totalItems;
@property unsigned long long totalSize;
@property double expectedTime;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
