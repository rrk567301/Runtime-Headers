@class NSPredicate, NSArray, NSSet;

@interface MKFCKEventTrigger : MKFCKTrigger

@property (retain, nonatomic) NSPredicate *condition;
@property (retain, nonatomic) NSArray *events;
@property (nonatomic) long long recurrencesInt;
@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) NSSet *users;

+ (id)fetchRequest;

- (id)_decodeEventDictionary:(id)a0 localModel:(id)a1 context:(id)a2;
- (id)_encodeEvent:(id)a0 encodedEventInCloud:(id)a1 accessories:(id)a2 users:(id)a3 shouldRemoveEvent:(BOOL *)a4 context:(id)a5;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
