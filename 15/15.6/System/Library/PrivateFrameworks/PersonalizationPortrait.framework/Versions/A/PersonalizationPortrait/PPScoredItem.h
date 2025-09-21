@class NSObject;
@protocol NSSecureCoding, NSCopying;

@interface PPScoredItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned short resultPosition;
@property (readonly, nonatomic) unsigned short resultCount;
@property (readonly, nonatomic) NSObject<NSCopying, NSSecureCoding> *item;
@property (readonly, nonatomic) double score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItem:(id)a0 score:(double)a1;
- (id)initWithItem:(id)a0 score:(double)a1 resultPosition:(unsigned short)a2 resultCount:(unsigned short)a3;
- (char)isEqualToScoredItem:(id)a0;

@end
