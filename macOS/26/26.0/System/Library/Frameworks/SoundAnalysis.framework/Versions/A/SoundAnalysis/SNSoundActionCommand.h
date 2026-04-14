@class NSString;

@interface SNSoundActionCommand : NSObject <SNResult, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ impl;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double confidenceThreshold;
@property (nonatomic) long long minDurationBlocks;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) long long hash;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
