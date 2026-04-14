@class NSImageView, NSString, NSView, NSTextField, NSArray;

@interface LUIPasswordPolicyViewController : NSObject {
    NSArray *_topLevelObjects;
}

@property (copy) NSString *policyIdentifier;
@property (retain) NSView *policyView;
@property (retain) NSImageView *policySatisfiedImageView;
@property (retain) NSTextField *policyDescriptionTextField;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
