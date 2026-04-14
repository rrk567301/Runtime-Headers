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

+ (id)fetchMeContact;
+ (id)keysForCNContact;
+ (id)createMutableContactWithHandle:(id)a0;
+ (id)errorForPersonDomain:(id)a0 andCode:(long long)a1;
+ (id)predicateForHandle:(id)a0;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithHandle:(id)a0 displayName:(id)a1;
- (id)fetchCNContactWithHandle:(id)a0;
- (id)initWithCSPerson:(id)a0 error:(id *)a1;
- (id)initWithPortraitPerson:(id)a0 error:(id *)a1;

@end
