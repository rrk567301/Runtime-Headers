@class MIPMultiverseIdentifier, MIPMediaItem;

@interface ML3ClientImportItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) MIPMediaItem *mediaItem;
@property (readonly, copy, nonatomic) MIPMultiverseIdentifier *multiverseIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMultiverseIdentifier:(id)a0 mediaItem:(id)a1;

@end
