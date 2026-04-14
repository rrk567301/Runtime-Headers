@interface CCToolKitToolTypedValuePrimitiveValueRecurrenceRuleRecurrenceRuleWeekday : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) unsigned int RecurrenceRuleWeekdayWeekday;
@property (readonly, nonatomic) BOOL RecurrenceRuleWeekdayEvery;
@property (nonatomic) BOOL hasRecurrenceRuleWeekdayEvery;
@property (readonly, nonatomic) long long RecurrenceRuleWeekdayNth;
@property (nonatomic) BOOL hasRecurrenceRuleWeekdayNth;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithRecurrenceRuleWeekdayWeekday:(unsigned int)a0 RecurrenceRuleWeekdayEvery:(id)a1 RecurrenceRuleWeekdayNth:(id)a2 error:(id *)a3;

@end
