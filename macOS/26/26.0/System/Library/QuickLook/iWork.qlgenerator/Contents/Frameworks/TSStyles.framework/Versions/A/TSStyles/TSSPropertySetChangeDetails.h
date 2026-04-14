@class TSSMutablePropertySet, TSSPropertySet;

@interface TSSPropertySetChangeDetails : NSObject {
    TSSMutablePropertySet *mChangedProperties;
}

@property (readonly, nonatomic) TSSPropertySet *changedProperties;

- (id)init;
- (void).cxx_destruct;
- (id)initWithChangedProperties:(id)a0;
- (void)addChangedProperty:(int)a0;
- (void)addChangedProperties:(id)a0;

@end
