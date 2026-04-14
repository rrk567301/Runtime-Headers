@class NSString;

@interface CCAppIntentsExtractedEntityAppointment : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *startLocationName;
@property (readonly, nonatomic) NSString *startLocationAddress;
@property (readonly, nonatomic) NSString *startLocationTelephone;
@property (readonly, nonatomic) NSString *startDate;
@property (readonly, nonatomic) NSString *startDateTimeZone;
@property (readonly, nonatomic) NSString *endDate;
@property (readonly, nonatomic) NSString *endDateTimeZone;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) NSString *cost;
@property (readonly, nonatomic) NSString *costCode;
@property (readonly, nonatomic) NSString *eventSubType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)initWithEventName:(id)a0 startLocationName:(id)a1 startLocationAddress:(id)a2 startLocationTelephone:(id)a3 startDate:(id)a4 startDateTimeZone:(id)a5 endDate:(id)a6 endDateTimeZone:(id)a7 duration:(id)a8 cost:(id)a9 costCode:(id)a10 eventSubType:(id)a11 error:(id *)a12;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;

@end
