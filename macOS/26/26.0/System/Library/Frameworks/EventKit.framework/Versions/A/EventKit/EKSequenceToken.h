@class NSDictionary;

@interface EKSequenceToken : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_sequenceNumbers;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCADSequenceToken:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)legacyToken;
- (void)encodeWithCoder:(id)a0;
- (id)CADToken;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
