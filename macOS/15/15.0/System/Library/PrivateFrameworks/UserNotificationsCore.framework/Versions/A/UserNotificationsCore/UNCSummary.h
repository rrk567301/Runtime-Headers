@class NSString, NSAttributedString;

@interface UNCSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *notificationIdentifier;
@property (readonly, copy, nonatomic) NSString *spotlightIdentifier;
@property (readonly, nonatomic, getter=isGroupSummary) BOOL groupSummary;
@property (readonly, copy, nonatomic) NSAttributedString *content;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 notificationIdentifier:(id)a1 spotlightIdentifier:(id)a2 groupSummary:(BOOL)a3 content:(id)a4 threadIdentifier:(id)a5;

@end
