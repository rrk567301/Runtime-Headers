@class CNObservable, AKCardViewDataSource, CNPublishingSubject, NSMutableArray;

@interface CNContactCardViewControlContext : NSObject

@property (retain, nonatomic) CNPublishingSubject *cardStateObservable;
@property (retain, nonatomic) NSMutableArray *observers;
@property (nonatomic) char editingRestricted;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) AKCardViewDataSource *dataSource;
@property (readonly, nonatomic) char isDirectoryResult;
@property (readonly, nonatomic) char canSelectContact;
@property (readonly, nonatomic) char canEditContact;
@property (readonly, nonatomic) CNObservable *contactCardStateObservable;

- (id)init;
- (void).cxx_destruct;

@end
