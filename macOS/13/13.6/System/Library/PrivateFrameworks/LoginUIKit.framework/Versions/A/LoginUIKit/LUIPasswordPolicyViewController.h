@class NSImageView, NSString, NSView, NSTextField, NSArray;

@interface LUIPasswordPolicyViewController : NSObject {
    NSArray *_topLevelObjects;
}

@property (copy) NSString *policyIdentifier;
@property NSView *policyView;
@property NSImageView *policySatisfiedImageView;
@property NSTextField *policyDescriptionTextField;

- (void)dealloc;
- (id)init;

@end
