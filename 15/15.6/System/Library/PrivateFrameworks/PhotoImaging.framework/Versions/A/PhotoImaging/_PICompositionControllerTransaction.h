@class NSArray, NSString, NSMutableSet;

@interface _PICompositionControllerTransaction : NSObject <PICompositionControllerDelegate> {
    NSMutableSet *_changes;
    unsigned long long _count;
}

@property (readonly, copy, nonatomic) NSArray *changes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)commit;
- (void)begin;
- (void)didAddAdjustment:(id)a0;
- (void)didRemoveAdjustment:(id)a0;
- (void)didUpdateAdjustment:(id)a0;
- (void)didUpdateAdjustments:(id)a0;

@end
