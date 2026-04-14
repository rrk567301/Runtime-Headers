@class NSString, NSUUID, HKHealthConceptIdentifier;

@interface HKConceptAuthorizationRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKHealthConceptIdentifier *identifier;
@property (readonly, copy, nonatomic) NSString *semanticIdentifierString;
@property (readonly, copy, nonatomic) NSUUID *sourceUUID;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) double modificationDate;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHealthConceptIdentifier:(id)a0 semanticIdentifierString:(id)a1 sourceUUID:(id)a2 status:(long long)a3 modificationDate:(double)a4;

@end
