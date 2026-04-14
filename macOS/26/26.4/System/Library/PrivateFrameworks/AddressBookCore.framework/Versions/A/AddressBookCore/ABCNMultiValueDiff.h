@class NSArray;

@interface ABCNMultiValueDiff : NSObject {
    NSArray *_updates;
}

+ (id)emptyDiff;

- (BOOL)isEmpty;
- (id)description;
- (void)dealloc;
- (id)initWithUpdates:(id)a0;
- (void)applyToABMutableMultiValue:(id)a0 transform:(id /* block */)a1;
- (id)multiValueByApplyToMultiValue:(id)a0 withIdentifierMap:(id)a1;

@end
