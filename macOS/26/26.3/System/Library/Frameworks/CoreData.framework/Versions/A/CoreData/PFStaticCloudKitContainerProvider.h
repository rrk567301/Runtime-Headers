@class CKContainer;

@interface PFStaticCloudKitContainerProvider : PFCloudKitContainerProvider

@property (readonly, nonatomic) CKContainer *container;

- (id)initWithContainer:(id)a0;
- (id)containerWithIdentifier:(id)a0 options:(id)a1;
- (void)dealloc;
- (id)containerWithIdentifier:(id)a0;

@end
