@class NSMutableSet;

@interface PPQuickTypeExplanationSet : NSObject <NSSecureCoding> {
    NSMutableSet *_set;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)stringFromExplanation:(unsigned char)a0;
+ (id)uniqueKeycodeFromExplanation:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)push:(unsigned char)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (BOOL)isEqualToQuickTypeExplanationSet:(id)a0;

@end
