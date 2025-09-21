@class NSString, NSData;

@interface FudPersonalizationObjectInfo : NSObject <NSSecureCoding> {
    char _esecSet;
    char _eproSet;
    char _trustedSet;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *objectTag;
@property (retain, nonatomic) NSData *digest;
@property (nonatomic) char trusted;
@property (nonatomic) char effectiveProductionMode;
@property (nonatomic) char effectiveSecurityMode;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTag:(id)a0;
- (char)isEffectiveProductionModeSet;
- (char)isEffectiveSecurityModeSet;
- (char)isTrustedSet;

@end
