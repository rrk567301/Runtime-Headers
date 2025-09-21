@class NSNumber, NSUUID;

@interface LNAsyncIteratorReference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *iteratorIdentifier;
@property (readonly, copy, nonatomic) NSUUID *sequenceIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSequenceIdentifier:(id)a0 iteratorIdentifier:(id)a1;

@end
