@class SGStorageReminder, NSArray, SGStorageEvent, SGStorageContact;

@interface SGJournalEntry : NSObject

@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) SGStorageEvent *event;
@property (readonly, nonatomic) NSArray *eventBatch;
@property (readonly, nonatomic) SGStorageContact *contact;
@property (readonly, nonatomic) SGStorageReminder *reminder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOperation:(unsigned long long)a0;
- (id)initWithOperation:(unsigned long long)a0 contact:(id)a1;
- (id)initWithOperation:(unsigned long long)a0 event:(id)a1;
- (id)initWithOperation:(unsigned long long)a0 eventBatch:(id)a1;
- (id)initWithOperation:(unsigned long long)a0 reminder:(id)a1;
- (char)isEqualToJournalEntry:(id)a0;

@end
