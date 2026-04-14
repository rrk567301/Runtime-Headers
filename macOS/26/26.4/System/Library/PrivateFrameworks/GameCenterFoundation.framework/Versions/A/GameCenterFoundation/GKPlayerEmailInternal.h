@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *addressSHA1;
@property (retain, nonatomic) NSString *addressPrefix;
@property (nonatomic) BOOL verified;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
