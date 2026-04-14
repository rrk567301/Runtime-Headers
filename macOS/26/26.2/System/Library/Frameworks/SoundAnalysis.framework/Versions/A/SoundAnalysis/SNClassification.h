@class NSString, _SNClassification;

@interface SNClassification : NSObject <NSSecureCoding> {
    _SNClassification *_impl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly) double confidence;

+ (id)new;

- (double)confidence;
- (id)identifier;
- (id)initWithImpl:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)impl;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)a0 confidence:(double)a1;

@end
