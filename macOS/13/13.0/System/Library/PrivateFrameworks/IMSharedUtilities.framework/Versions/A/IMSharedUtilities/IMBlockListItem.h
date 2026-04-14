@class NSString, IMBlockListPerson, CNContact;

@interface IMBlockListItem : NSObject

@property (retain, nonatomic) IMBlockListPerson *person;
@property (retain, nonatomic) NSString *address;
@property (nonatomic) void *cmfItem;
@property (retain, nonatomic) NSString *cachedFormattedHandle;
@property (retain, nonatomic) NSString *cachedFormattedPersonName;
@property (readonly, nonatomic) CNContact *cnPerson;

- (void)dealloc;
- (void).cxx_destruct;
- (id)fullName;
- (id)formattedAddress;
- (id)initWithPerson:(id)a0 address:(id)a1 cmfItemRef:(void *)a2;
- (id)initWithCNContact:(id)a0 address:(id)a1 cmfItemRef:(void *)a2;
- (void)lookupPerson;
- (id)formattedHandle;
- (BOOL)isEqualToBlockListItem:(id)a0;

@end
