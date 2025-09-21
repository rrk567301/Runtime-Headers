@class NSString;

@interface AAPSyncAnchor : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _mainIndex;
    unsigned long long _subIndex;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *stringRepresentation;

+ (id)anchorFromStringRepresentation:(id)a0;
+ (id)anchorFromStringRepresentation:(id)a0 error:(id *)a1;
+ (char)isValidStringRepresentation:(id)a0 withMainIndex:(unsigned long long *)a1 subIndex:(unsigned long long *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)primitiveAnchor;
- (id)_initWithMainIndex:(unsigned long long)a0 subIndex:(unsigned long long)a1;
- (id)anchorByIncrementingSubIndex;
- (char)isEqualToAnchor:(id)a0;
- (char)isNewerThanAnchor:(id)a0;
- (char)isOlderThanAnchor:(id)a0;
- (char)isPrimitiveAnchor;

@end
