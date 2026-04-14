@class NSSet, TIInputContextHistory;

@interface NSInputContextHistory : NSObject

@property (readonly, nonatomic) TIInputContextHistory *tiInputContextHistory;
@property (readonly, nonatomic) NSSet *senderIdentifiers;
@property (readonly, nonatomic) NSSet *recipientIdentifiers;
@property (readonly, nonatomic) NSSet *recipientNames;

+ (id)inputContextHistoryWithTIInputContextHistory:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)addTextEntry:(id)a0 timestamp:(id)a1 senderIdentifier:(id)a2;
- (id)initWithInputContextHistory:(id)a0;
- (id)initWithRecipientIdentifiers:(id)a0;
- (id)initWithRecipientIdentifiers:(id)a0 senderIdentifiers:(id)a1;
- (void)updateRecipientNames:(id)a0;

@end
