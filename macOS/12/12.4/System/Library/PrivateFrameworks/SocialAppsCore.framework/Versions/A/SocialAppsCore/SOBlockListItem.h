@class NSString, ABPerson, IMPerson;

@interface SOBlockListItem : NSObject

@property (retain, nonatomic) IMPerson *person;
@property (retain, nonatomic) NSString *address;
@property (nonatomic) void *cmfItem;
@property (retain, nonatomic) NSString *cachedFormattedHandle;
@property (retain, nonatomic) NSString *cachedFormattedPersonName;
@property (readonly, nonatomic) ABPerson *abPerson;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)fullName;
- (id)formattedAddress;
- (void)lookupPerson;
- (id)initWithPerson:(id)a0 address:(id)a1 cmfItemRef:(void *)a2;
- (id)formattedHandle;
- (BOOL)isEqualToBlockListItem:(id)a0;
- (id)formattedPersonNameWithAddress:(BOOL)a0;
- (id)formattedPersonNameWithAddress;
- (id)initWithABPerson:(id)a0 address:(id)a1 cmfItemRef:(void *)a2;
- (id)formattedPersonName;

@end
