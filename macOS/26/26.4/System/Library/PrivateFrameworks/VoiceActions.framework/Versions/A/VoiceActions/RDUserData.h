@class NSDictionary, NSString, NSArray;

@interface RDUserData : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSArray *contactsWords;

+ (BOOL)supportsSecureCoding;
+ (void)fetchUserDataWithLanguage:(id)a0 completion:(id /* block */)a1;
+ (void)fetchUserDataWithLanguage:(id)a0 keepGoing:(id /* block */)a1 completion:(id /* block */)a2;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)_fetchContactsWithKeepGoing:(id /* block */)a0;
- (id)_initWithLanguage:(id)a0;

@end
