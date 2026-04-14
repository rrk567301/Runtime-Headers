@class NSString, NSArray, NSDate;

@interface CCTextUnderstandingContact : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_dateOfBirth;
    double _raw_dateOfBirth;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *postalAddresses;
@property (readonly, nonatomic) NSArray *urlAddresses;
@property (readonly, nonatomic) NSDate *dateOfBirth;
@property (readonly, nonatomic) NSString *placeOfBirth;
@property (readonly, nonatomic) NSString *sex;
@property (readonly, nonatomic) NSString *organizationName;
@property (readonly, nonatomic) NSString *organizationHours;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)dateOfBirth;
- (id)initWithName:(id)a0 emailAddresses:(id)a1 phoneNumbers:(id)a2 postalAddresses:(id)a3 urlAddresses:(id)a4 dateOfBirth:(id)a5 placeOfBirth:(id)a6 sex:(id)a7 organizationName:(id)a8 organizationHours:(id)a9 error:(id *)a10;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;

@end
