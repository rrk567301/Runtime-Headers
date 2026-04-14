@class IRProtocol;

@interface IRCommand : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long *sequence;
@property (readonly, nonatomic) unsigned long long sequenceCount;
@property (readonly, nonatomic) IRProtocol *protocol;
@property (readonly, nonatomic) unsigned long long payload;
@property (readonly, nonatomic) BOOL isRepeat;
@property (nonatomic) unsigned long long timestamp;

+ (id)commandWithProtocol:(id)a0 payload:(unsigned long long)a1 repeat:(BOOL)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithProtocol:(id)a0 payload:(unsigned long long)a1 repeat:(BOOL)a2;
- (BOOL)setSequence:(unsigned long long *)a0 withCount:(unsigned long long)a1;

@end
