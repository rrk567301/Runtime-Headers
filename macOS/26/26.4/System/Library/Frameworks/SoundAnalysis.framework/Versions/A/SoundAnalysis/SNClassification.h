@class NSString, _SNClassification;

@interface SNClassification : NSObject <NSSecureCoding> {
    _SNClassification *_impl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly) double confidence;

+ (id)new;

- (double)confidence;
- (id)initWithImpl:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)impl;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (id)initWithIdentifier:(id)a0 confidence:(double)a1;

@end
