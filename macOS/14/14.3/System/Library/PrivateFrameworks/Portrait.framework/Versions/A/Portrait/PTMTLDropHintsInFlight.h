@class NSMutableArray;

@interface PTMTLDropHintsInFlight : NSObject {
    NSMutableArray *_activeGroups;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)_addResourceGroup:(id)a0 toCommandBuffer:(id)a1;
- (void)_dropResourceGroup:(id)a0 fromCommandBuffer:(id)a1;
- (void)_setActiveResourceGroups:(id)a0;
- (int)checkForUnreleasedDrophints;
- (void)setActiveResourceGroups:(id)a0;

@end
