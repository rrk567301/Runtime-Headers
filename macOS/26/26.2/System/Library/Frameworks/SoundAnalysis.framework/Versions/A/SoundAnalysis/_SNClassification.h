@class NSString;

@interface _SNClassification : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ impl;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double confidence;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 confidence:(double)a1;

@end
