@class NSString, NSDictionary, NSDate;

@interface WBSAddressBookMatch : WBSFormAutoFillItem <NSSecureCoding> {
    id _value;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSDate *dateValue;
@property (copy, nonatomic) NSString *property;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *label;
@property (copy, nonatomic) NSDictionary *controlIDToAutoFillValueMap;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *uniqueID;

+ (id)addressBookMatchWithDictionaryRepresentation:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)completion;
- (void)_setValue:(id)a0;
- (id)initWithValue:(id)a0 property:(id)a1 key:(id)a2 identifier:(id)a3 label:(id)a4;
- (id)initWithValue:(id)a0 property:(id)a1 key:(id)a2 identifier:(id)a3 label:(id)a4 uniqueID:(id)a5;
- (id)initWithValue:(id)a0 property:(id)a1 key:(id)a2 identifier:(id)a3;

@end
