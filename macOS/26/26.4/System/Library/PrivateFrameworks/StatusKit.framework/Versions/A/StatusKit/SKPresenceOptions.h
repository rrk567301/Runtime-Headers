@class NSString, IDSURI;

@interface SKPresenceOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isDaemonIdleExitEnabled;
@property (nonatomic) BOOL isPersonal;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) IDSURI *clientSpecifiedURI;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithServiceIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
