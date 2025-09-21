@interface _SWCGeneration : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {
    int _processIdentifier;
    int _processIdentifierVersion;
    unsigned long long _tick;
}

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)generationByIncrementingSelf;
- (id)initWithPID:(int)a0 version:(int)a1 tick:(unsigned long long)a2;

@end
