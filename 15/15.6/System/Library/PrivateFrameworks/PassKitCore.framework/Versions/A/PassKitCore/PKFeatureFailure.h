@class NSNumber, NSString;

@interface PKFeatureFailure : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long featureIdentifier;
@property (readonly, copy, nonatomic) NSNumber *errorCode;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSString *serverDescription;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)errorRepresentation;

@end
