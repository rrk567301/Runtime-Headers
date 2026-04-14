@class NSString;

@interface NSPrefPaneAnchor : NSObject {
    NSString *mAnchorString;
    NSString *mPPIdentifier;
}

+ (id)anchorWithString:(id)a0 prefPaneIdentifier:(id)a1;

- (id)name;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)objectSpecifier;
- (void)reveal:(id)a0;
- (id)initWithAnchor:(id)a0 prefPaneIdentifier:(id)a1;

@end
