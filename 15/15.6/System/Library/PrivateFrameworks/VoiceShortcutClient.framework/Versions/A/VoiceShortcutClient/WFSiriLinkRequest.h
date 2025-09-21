@class NSString, LNAction;

@interface WFSiriLinkRequest : WFSiriActionRequest

@property (readonly, nonatomic) LNAction *action;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *nameOverride;
@property (readonly, nonatomic) char showWhenRun;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(id)a0 bundleIdentifier:(id)a1 nameOverride:(id)a2 showWhenRun:(char)a3;

@end
