@class NSString;

@interface NSPrefPaneAnchor : NSObject {
    NSString *mAnchorString;
    NSString *mPPIdentifier;
}

+ (id)anchorWithString:(id)a0 prefPaneIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)init;
- (id)objectSpecifier;
- (void)reveal:(id)a0;
- (id)initWithAnchor:(id)a0 prefPaneIdentifier:(id)a1;

@end
