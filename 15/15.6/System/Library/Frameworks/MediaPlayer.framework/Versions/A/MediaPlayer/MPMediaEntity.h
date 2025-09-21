@class NSString, MPMediaItem, MPMediaLibrary, MIPMultiverseIdentifier;

@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) MPMediaLibrary *mediaLibrary;
@property (readonly, nonatomic) MPMediaItem *representativeItem;
@property (readonly, nonatomic) MIPMultiverseIdentifier *multiverseIdentifier;
@property (readonly, nonatomic) NSString *_tokenBinaryIdentifierAsString;
@property (readonly, nonatomic) unsigned long long persistentID;

+ (char)canFilterByProperty:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)valueForProperty:(id)a0;
- (id)cachedValueForProperty:(id)a0 isCached:(char *)a1;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithMultiverseIdentifier:(id)a0 library:(id)a1;
- (void)invalidateCachedProperties;
- (id)valuesForProperties:(id)a0;

@end
