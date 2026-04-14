@class CoreDAVItemWithNoChildren, NSMutableArray;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)init;
- (void)addEmailAddress:(id)a0;
- (id)description;

@end
