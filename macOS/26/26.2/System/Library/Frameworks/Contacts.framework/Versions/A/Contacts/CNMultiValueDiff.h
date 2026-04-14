@class NSArray;

@interface CNMultiValueDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *updates;

+ (id)emptyDiff;
+ (id)diffMultiValue:(id)a0 toMultiValue:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEmpty;
- (id)initWithUpdates:(id)a0;
- (id)multiValueByApplyToMultiValue:(id)a0 withIdentifierMap:(id)a1;
- (void)applyToABCDContact:(id)a0 propertyDescription:(id)a1;

@end
