@class CoreDAVItemWithNoChildren, NSMutableArray;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (void)addEmailAddress:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
