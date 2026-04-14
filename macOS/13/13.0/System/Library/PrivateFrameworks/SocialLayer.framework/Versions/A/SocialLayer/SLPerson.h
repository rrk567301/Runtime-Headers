@class CNContactStore, NSString, CNContact, NSData;

@interface SLPerson : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CNContactStore *contactStore;
@property (nonatomic) BOOL hasMutableContact;
@property (retain, nonatomic) NSData *thumbnailImageData;
@property (copy, nonatomic) NSString *shortDisplayName;
@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) CNContact *contact;

+ (id)keysForCNContact;
+ (id)fetchMeContact;
+ (id)errorForPersonDomain:(id)a0 andCode:(long long)a1;
+ (id)createMutableContactWithHandle:(id)a0;
+ (id)predicateForHandle:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithHandle:(id)a0 displayName:(id)a1;
- (id)initWithPortraitPerson:(id)a0 error:(id *)a1;
- (id)initWithCSPerson:(id)a0 error:(id *)a1;
- (id)fetchCNContactWithHandle:(id)a0;

@end
