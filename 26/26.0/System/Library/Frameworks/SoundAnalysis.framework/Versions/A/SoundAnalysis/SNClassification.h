@class NSString, _SNClassification;

@interface SNClassification : NSObject <NSSecureCoding> {
    _SNClassification *_impl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly) double confidence;

+ (id)new;

- (id)impl;
- (double)confidence;
- (id)initWithImpl:(id)a0;
- (id)identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 confidence:(double)a1;

@end
