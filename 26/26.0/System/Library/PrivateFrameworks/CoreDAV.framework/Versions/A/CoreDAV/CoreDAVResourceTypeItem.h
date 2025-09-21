@class CoreDAVItemWithNoChildren, NSSet;

@interface CoreDAVResourceTypeItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *addressBook;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *searchAddressBook;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *shared;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *principal;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *collection;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;
@property (readonly, nonatomic) NSSet *stringSet;

+ (id)copyParseRules;

- (BOOL)isTypeWithNameSpace:(id)a0 andName:(id)a1;
- (id)init;
- (id)description;
- (void)write:(id)a0;
- (void).cxx_destruct;

@end
