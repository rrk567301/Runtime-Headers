@class NSError, LNDisplayRepresentation, LNAction;

@interface LNDisplayRepresentationFetchResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, copy, nonatomic) LNDisplayRepresentation *displayRepresentation;
@property (readonly, copy, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAction:(id)a0 displayRepresentation:(id)a1 error:(id)a2;

@end
