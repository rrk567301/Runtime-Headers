@class NSString, NSArray, PXGadgetSpec;

@interface PXGadgetSection : NSObject {
    long long _changeCount;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *gadgets;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)a0 gadgets:(id)a1;

@end
