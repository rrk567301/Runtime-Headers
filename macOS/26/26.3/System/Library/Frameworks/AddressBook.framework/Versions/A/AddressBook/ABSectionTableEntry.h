@class NSString;

@interface ABSectionTableEntry : ABTableEntry

@property (copy, nonatomic) NSString *header;
@property (nonatomic) long long theme;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *sortingFirstName;
@property (readonly, nonatomic) NSString *sortingLastName;
@property (readonly, copy, nonatomic) NSString *accessibilityDescription;
@property (nonatomic) BOOL isMe;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;

@end
