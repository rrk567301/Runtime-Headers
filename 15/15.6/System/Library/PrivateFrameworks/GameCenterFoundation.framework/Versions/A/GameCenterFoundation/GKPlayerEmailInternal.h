@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *addressSHA1;
@property (retain, nonatomic) NSString *addressPrefix;
@property (nonatomic) char verified;

+ (char)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
