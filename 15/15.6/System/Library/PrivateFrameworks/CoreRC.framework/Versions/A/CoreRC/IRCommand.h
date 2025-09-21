@class IRProtocol;

@interface IRCommand : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long *sequence;
@property (readonly, nonatomic) unsigned long long sequenceCount;
@property (readonly, nonatomic) IRProtocol *protocol;
@property (readonly, nonatomic) unsigned long long payload;
@property (readonly, nonatomic) char isRepeat;
@property (nonatomic) unsigned long long timestamp;

+ (id)commandWithProtocol:(id)a0 payload:(unsigned long long)a1 repeat:(char)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtocol:(id)a0 payload:(unsigned long long)a1 repeat:(char)a2;
- (char)setSequence:(unsigned long long *)a0 withCount:(unsigned long long)a1;

@end
