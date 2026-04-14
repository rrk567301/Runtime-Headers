@class NSDate;

@interface AFHeadGestureResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long userIntent;
@property (readonly, nonatomic) long long gestureType;
@property (readonly, nonatomic) unsigned long long activeContexts;
@property (readonly, copy, nonatomic) NSDate *timestamp;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithUserIntent:(long long)a0 gestureType:(long long)a1 activeContexts:(unsigned long long)a2 timestamp:(id)a3;

@end
