@class NSDictionary;

@interface EKSequenceToken : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_sequenceNumbers;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCADSequenceToken:(id)a0;
- (id)CADToken;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (int)legacyToken;
- (id)initWithCoder:(id)a0;

@end
