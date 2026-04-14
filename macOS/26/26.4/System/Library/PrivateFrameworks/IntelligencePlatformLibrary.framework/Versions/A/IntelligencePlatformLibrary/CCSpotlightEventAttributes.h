@class NSArray, CCRepeatedDouble, NSDate;

@interface CCSpotlightEventAttributes : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_completionDate;
    double _raw_completionDate;
    BOOL _hasRaw_dueDate;
    double _raw_dueDate;
    BOOL _hasRaw_endDate;
    double _raw_endDate;
    CCRepeatedDouble *_raw_importantDates;
    BOOL _hasRaw_startDate;
    double _raw_startDate;
}

@property (readonly, nonatomic) BOOL allDay;
@property (nonatomic) BOOL hasAllDay;
@property (readonly, nonatomic) NSDate *completionDate;
@property (readonly, nonatomic) NSDate *dueDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *importantDates;
@property (readonly, nonatomic) NSDate *startDate;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)startDate;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)endDate;
- (id)dueDate;
- (id)completionDate;
- (id)importantDates;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithAllDay:(id)a0 completionDate:(id)a1 dueDate:(id)a2 endDate:(id)a3 importantDates:(id)a4 startDate:(id)a5 error:(id *)a6;

@end
