@class NSMutableArray;

@interface PTMTLDropHintsInFlight : NSObject {
    NSMutableArray *_activeGroups;
}

+ (void)setEnabled:(BOOL)a0 device:(id)a1;
+ (id)instance:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setActiveResourceGroups:(id)a0;
- (void)_addResourceGroup:(id)a0 toCommandBuffer:(id)a1;
- (void)_dropResourceGroup:(id)a0 fromCommandBuffer:(id)a1;
- (int)checkForUnreleasedDrophints;

@end
