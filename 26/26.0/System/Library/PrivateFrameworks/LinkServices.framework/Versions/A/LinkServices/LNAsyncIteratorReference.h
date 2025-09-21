@class NSNumber, NSUUID;

@interface LNAsyncIteratorReference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *iteratorIdentifier;
@property (readonly, copy, nonatomic) NSUUID *sequenceIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSequenceIdentifier:(id)a0 iteratorIdentifier:(id)a1;

@end
