@class NSString;

@interface CMIOExtensionScheduledOutput : NSObject <NSCopying, NSSecureCoding> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long sequenceNumber;
@property (readonly) unsigned long long hostTimeInNanoseconds;

+ (id)scheduledOutputWithSequenceNumber:(unsigned long long)a0 hostTimeInNanoseconds:(unsigned long long)a1;

- (id)initWithXPCDictionary:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyXPCDictionary;
- (id)initWithSequenceNumber:(unsigned long long)a0 hostTimeInNanoseconds:(unsigned long long)a1;

@end
