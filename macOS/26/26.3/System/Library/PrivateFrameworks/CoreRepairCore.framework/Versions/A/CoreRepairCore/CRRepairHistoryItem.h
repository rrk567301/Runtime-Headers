@class NSString;

@interface CRRepairHistoryItem : NSObject

@property (retain, nonatomic) NSString *componentName;
@property (nonatomic) int componentType;
@property (nonatomic) BOOL isRepaired;
@property (nonatomic) BOOL isUsed;
@property (retain, nonatomic) NSString *repairDate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithComponentName:(id)a0 CRComponentType:(int)a1 isRepaired:(BOOL)a2 isUsed:(BOOL)a3 repairDate:(id)a4;

@end
