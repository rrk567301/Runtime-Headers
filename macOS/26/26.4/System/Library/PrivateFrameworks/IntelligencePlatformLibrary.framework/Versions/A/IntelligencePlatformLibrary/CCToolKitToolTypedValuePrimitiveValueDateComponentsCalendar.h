@class NSString;

@interface CCToolKitToolTypedValuePrimitiveValueDateComponentsCalendar : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) unsigned int identifier;
@property (readonly, nonatomic) NSString *timeZoneIdentifier;
@property (readonly, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) long long firstWeekday;
@property (nonatomic) BOOL hasFirstWeekday;
@property (readonly, nonatomic) long long minimumDaysInFirstWeek;
@property (nonatomic) BOOL hasMinimumDaysInFirstWeek;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(unsigned int)a0 timeZoneIdentifier:(id)a1 localeIdentifier:(id)a2 firstWeekday:(id)a3 minimumDaysInFirstWeek:(id)a4 error:(id *)a5;

@end
