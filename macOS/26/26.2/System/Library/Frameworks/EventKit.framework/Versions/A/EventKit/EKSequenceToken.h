@class NSDictionary;

@interface EKSequenceToken : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_sequenceNumbers;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithCADSequenceToken:(id)a0;
- (int)legacyToken;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)CADToken;

@end
