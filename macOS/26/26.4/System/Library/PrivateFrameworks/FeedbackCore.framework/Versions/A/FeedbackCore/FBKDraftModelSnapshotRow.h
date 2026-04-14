@class FBKDraftModelSnapshotSection, NSObject;

@interface FBKDraftModelSnapshotRow : NSObject

@property (retain, nonatomic) FBKDraftModelSnapshotSection *section;
@property (retain, nonatomic) NSObject *object;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSection:(id)a0 object:(id)a1;

@end
