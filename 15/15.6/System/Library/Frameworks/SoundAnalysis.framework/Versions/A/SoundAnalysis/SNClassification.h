@class NSString, _SNClassification;

@interface SNClassification : NSObject <NSSecureCoding> {
    _SNClassification *_impl;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly) double confidence;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (double)confidence;
- (id)impl;
- (id)initWithImpl:(id)a0;
- (id)initWithIdentifier:(id)a0 confidence:(double)a1;

@end
