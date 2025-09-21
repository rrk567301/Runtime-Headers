@class NSString, NSUUID, HKHealthConceptIdentifier;

@interface HKConceptAuthorizationRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKHealthConceptIdentifier *identifier;
@property (readonly, copy, nonatomic) NSString *semanticIdentifierString;
@property (readonly, copy, nonatomic) NSUUID *sourceUUID;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) double modificationDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithHealthConceptIdentifier:(id)a0 semanticIdentifierString:(id)a1 sourceUUID:(id)a2 status:(long long)a3 modificationDate:(double)a4;

@end
