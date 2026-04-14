@class CCItemMessage, NSArray, NSString;
@protocol CCItemContent;

@interface SEMCascadeEntityInfo : NSObject <SEMEntityInfo> {
    CCItemMessage<CCItemContent> *_content;
    NSArray *_allMetaContent;
    NSString *_sourceIdentifier;
    NSString *_personaIdentifier;
    NSArray *_convertedInstances;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned char)entityType;
- (id)personaIdentifier;
- (id)content;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sourceIdentifier;
- (unsigned short)itemType;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)sourceIdentifierOrConstant;
- (id)toKVItem:(id *)a0;
- (id)allMetaContent;
- (id)initWithContent:(id)a0 allMetaContent:(id)a1 sourceIdentifier:(id)a2 personaIdentifier:(id)a3;
- (BOOL)isEqualToCascadeEntityInfo:(id)a0;
- (id)toINPersons:(id *)a0;
- (id)toKVItems:(id *)a0;

@end
