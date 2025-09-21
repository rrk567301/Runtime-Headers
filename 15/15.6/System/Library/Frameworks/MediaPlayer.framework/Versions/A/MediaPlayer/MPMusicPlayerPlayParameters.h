@class NSString, NSDictionary, MPIdentifierSet;

@interface MPMusicPlayerPlayParameters : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) MPIdentifierSet *identifiers;
@property (readonly, copy, nonatomic) NSString *itemKind;
@property (readonly, nonatomic, getter=isLibraryContent) char libraryContent;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, copy, nonatomic) NSString *catalogID;
@property (readonly, copy, nonatomic) NSString *libraryID;
@property (readonly, copy, nonatomic) NSString *persistentID;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
