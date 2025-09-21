@class _PASLock;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding> {
    _PASLock *_set;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)stringFromExplanation:(unsigned char)a0;
+ (id)uniqueKeycodeFromExplanation:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)push:(unsigned char)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (char)isEqualToQuickTypeExplanationSet:(id)a0;

@end
