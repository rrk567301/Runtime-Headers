@class NSString;

@interface EMTSentencePiece : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *piece;
@property (readonly, copy, nonatomic) NSString *surface;
@property (readonly, nonatomic) unsigned int vocabID;
@property (readonly, nonatomic) unsigned int byteBegin;
@property (readonly, nonatomic) unsigned int byteEnd;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPiece:(id)a0 surface:(id)a1 vocabID:(unsigned int)a2 byteBegin:(unsigned int)a3 byteEnd:(unsigned int)a4;

@end
