@class NSString, NSArray;

@interface AVAssetPlannerIncrementalState : NSObject

@property (copy) NSString *sessionName;
@property (copy) NSArray *trackStates;

+ (id)emptyState;
+ (id)fromDictionary:(id)a0 error:(id *)a1;

- (id)toDictionary;
- (id)description;
- (void)dealloc;
- (BOOL)resumableBy:(id)a0;
- (id)trackIncrementalStateForTrack:(int)a0;

@end
