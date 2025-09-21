@class NSString;

@interface WFEmailAddress : NSObject <NSCopying, WFNaming, WFSerializableContent, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addressWithEmailAddress:(id)a0;
+ (id)addressWithEmailAddress:(id)a0 label:(id)a1;
+ (id)addressesWithMailtoURL:(id)a0;
+ (id)addressesWithTextCheckingResult:(id)a0;
+ (id)emailAddressesInString:(id)a0 error:(id *)a1;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (char)stringContainsEmailAddresses:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAddress:(id)a0 label:(id)a1;
- (id)wfSerializedRepresentation;

@end
