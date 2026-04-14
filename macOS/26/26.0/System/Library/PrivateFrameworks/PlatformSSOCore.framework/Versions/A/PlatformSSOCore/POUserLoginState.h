@class NSString, NSDate;

@interface POUserLoginState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSDate *lastLogin;
@property (nonatomic) unsigned long long loginType;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (readonly) NSString *uniqueIdentifier;

- (id)dataRepresentation;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithUniqueIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataRepresentationForDisplay:(BOOL)a0;
- (id)dictionaryRepresentationForDisplay:(BOOL)a0;
- (void)setlastLogin:(id)a0;

@end
