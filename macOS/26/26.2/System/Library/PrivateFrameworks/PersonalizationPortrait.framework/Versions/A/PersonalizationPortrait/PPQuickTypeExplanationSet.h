@class _PASLock;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding> {
    _PASLock *_set;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)uniqueKeycodeFromExplanation:(unsigned char)a0;
+ (id)stringFromExplanation:(unsigned char)a0;

- (void)push:(unsigned char)a0;
- (unsigned long long)count;
- (BOOL)isEqualToQuickTypeExplanationSet:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
