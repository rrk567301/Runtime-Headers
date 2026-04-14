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

- (id)personaIdentifier;
- (id)content;
- (unsigned char)entityType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (unsigned short)itemType;
- (id)sourceIdentifier;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)sourceIdentifierOrConstant;
- (id)toKVItem:(id *)a0;
- (id)allMetaContent;
- (id)initWithContent:(id)a0 allMetaContent:(id)a1 sourceIdentifier:(id)a2 personaIdentifier:(id)a3;
- (BOOL)isEqualToCascadeEntityInfo:(id)a0;
- (id)toINPersons:(id *)a0;
- (id)toKVItems:(id *)a0;

@end
