@interface SNExceptionRequest : NSObject <SNRequest, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ impl;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic) long long exceptionLocation;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExceptionLocation:(long long)a0;

@end
