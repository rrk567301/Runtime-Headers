@class NSArray, LNDisplayRepresentation;

@interface LNActionPrediction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *parameterIdentifiers;
@property (readonly, copy, nonatomic) LNDisplayRepresentation *displayRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithParameterIdentifiers:(id)a0 displayRepresentation:(id)a1;

@end
