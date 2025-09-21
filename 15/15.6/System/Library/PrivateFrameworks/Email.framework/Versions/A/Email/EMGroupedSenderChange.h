@class NSNumber;

@interface EMGroupedSenderChange : EMMessageListItemChange

@property (retain, nonatomic) NSNumber *unreadCount;
@property (retain, nonatomic) NSNumber *unseenCount;

+ (char)supportsSecureCoding;
+ (id)changeFrom:(id)a0 to:(id)a1;
+ (id)changeForKeyPaths:(id)a0 ofItem:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addChange:(id)a0;
- (char)applyToMessageListItem:(id)a0;
- (id)changeDescriptionsForInternal:(char)a0 useDebugDescriptions:(char)a1;

@end
