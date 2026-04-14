@class NSString, NSMutableArray, NSDictionary;

@interface PK2Printer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *dnssdName;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *txts;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) NSString *dnssdDomain;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *product;
@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSString *adminURL;
@property (readonly, nonatomic) NSString *URL;
@property (readonly, nonatomic) NSString *sanitizedName;
@property (readonly, nonatomic) NSString *sanitizedLocation;
@property (readonly, nonatomic) NSString *sanatizedMake;
@property (readonly, nonatomic) NSString *sanatizedModel;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long authentication;
@property (readonly, nonatomic) unsigned long long jobTypesSupported;
@property (readonly, nonatomic) unsigned long long attributes;
@property (nonatomic) unsigned char power;
@property (retain, nonatomic) NSString *printerURL;
@property (nonatomic) BOOL isManagedPrinter;
@property (readonly) NSDictionary *dictionaryRepresentation;

+ (id)model:(id)a0;
+ (id)searchForKeys:(id)a0 deviceID:(id)a1;
+ (id)make:(id)a0;
+ (id)softwareUpdateRepresentation:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)URLs;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)ty;
- (id)txtOfType:(id)a0;
- (id)txt;
- (id)getQueryKey:(id)a0 components:(id)a1;
- (id)initPrinterWithName:(id)a0;
- (id)initPrinterWithName:(id)a0 txts:(id)a1;
- (id)initPrinterWithURL:(id)a0 txt:(id)a1;
- (unsigned long long)stateReasons;
- (BOOL)queueExists:(id)a0;
- (unsigned long long)appendTxtRecords:(id)a0;
- (unsigned long long)removeTxtRecordsWithInterfaceIndex:(unsigned int)a0 ofType:(id)a1;

@end
