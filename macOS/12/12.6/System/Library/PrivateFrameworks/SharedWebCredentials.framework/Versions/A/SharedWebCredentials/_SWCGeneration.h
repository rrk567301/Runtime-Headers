@interface _SWCGeneration : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {
    int _processIdentifier;
    int _processIdentifierVersion;
    unsigned long long _tick;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPID:(int)a0 version:(int)a1 tick:(unsigned long long)a2;
- (id)generationByIncrementingSelf;

@end
