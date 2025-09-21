@class NSString;

@interface ECMessageFlags : NSObject <ECMessageFlagsBuilder, NSCopying, NSSecureCoding, EFPubliclyDescribable> {
    union ECMessageFlagsHashedBitField { unsigned long long hashValue; struct { unsigned char read : 1; unsigned char deleted : 1; unsigned char replied : 1; unsigned char flagged : 1; unsigned char draft : 1; unsigned char forwarded : 1; unsigned char redirected : 1; unsigned char junkLevelSetByUser : 1; unsigned char junkLevel : 2; unsigned char flagColor : 3; } bitField; } _storage;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char read;
@property (nonatomic) char deleted;
@property (nonatomic) char replied;
@property (nonatomic) char flagged;
@property (nonatomic) char draft;
@property (nonatomic) char forwarded;
@property (nonatomic) char redirected;
@property (nonatomic) char junkLevelSetByUser;
@property (nonatomic) unsigned long long junkLevel;
@property (nonatomic) unsigned long long flagColor;
@property (readonly, nonatomic, getter=isJunk) char junk;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cachedFlagsWithHash:(unsigned long long)a0 generator:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHash:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)_flagColorDebugDescription;
- (id)_junkLevelDebugDescription;
- (id)updatedFlagsWithBuilder:(id /* block */)a0;

@end
