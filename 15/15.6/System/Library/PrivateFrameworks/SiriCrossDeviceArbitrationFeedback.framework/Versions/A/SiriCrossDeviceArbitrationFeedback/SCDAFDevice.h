@class NSString, NSArray;

@interface SCDAFDevice : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *build;
@property (copy, nonatomic) NSString *enclosureColor;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *roomName;
@property (copy, nonatomic) NSString *speechId;
@property (retain, nonatomic) NSArray *productTypes;
@property (retain, nonatomic) NSArray *deviceClass;

+ (id)arrayDictionaryRepresentation:(id)a0;
+ (unsigned long long)deviceClassFromProductTypeString:(id)a0;
+ (id)devicesArrayWithDictionaryRepresentation:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
