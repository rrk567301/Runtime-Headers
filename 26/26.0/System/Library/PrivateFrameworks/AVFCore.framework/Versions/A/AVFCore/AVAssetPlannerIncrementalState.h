@class NSString, NSArray;

@interface AVAssetPlannerIncrementalState : NSObject

@property (copy) NSString *sessionName;
@property (copy) NSArray *trackStates;

+ (id)emptyState;
+ (id)fromDictionary:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)description;
- (id)toDictionary;
- (BOOL)resumableBy:(id)a0;
- (id)trackIncrementalStateForTrack:(int)a0;

@end
