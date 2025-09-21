@class CNContactStore, CNContact;

@interface CNUIContainerFetchDescription : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNContactStore *mainContactStore;
@property (readonly, nonatomic) CNContactStore *alternateContactStore;
@property (readonly, nonatomic) char fetchAsynchronously;
@property (readonly, nonatomic) char fetchingDuringLaunch;

+ (id)fetchDescriptionWithContact:(id)a0 contactStore:(id)a1 alternateContactStore:(id)a2 fetchAsynchronously:(char)a3 fetchingDuringLaunch:(char)a4;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFetchDescriptionWithContact:(id)a0 contactStore:(id)a1 alternateContactStore:(id)a2 fetchAsynchronously:(char)a3 fetchingDuringLaunch:(char)a4;

@end
