@class NSString, IDSURI;

@interface SKPresenceOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isDaemonIdleExitEnabled;
@property (nonatomic) BOOL isPersonal;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) IDSURI *clientSpecifiedURI;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithServiceIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
