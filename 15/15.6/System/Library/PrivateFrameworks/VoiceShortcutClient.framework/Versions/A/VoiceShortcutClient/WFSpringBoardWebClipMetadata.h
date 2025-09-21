@class NSString;

@interface WFSpringBoardWebClipMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *shortcutIdentifier;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) char appIsInstalled;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithShortcutIdentifier:(id)a0 applicationIdentifier:(id)a1 appIsInstalled:(char)a2;

@end
