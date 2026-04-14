@class NSNumber, CCItemMessage;
@protocol CCItemMetaContent;

@interface CCItemInstance : CCSharedItem {
    NSNumber *_instanceIdentifier;
    NSNumber *_sourceItemIdentifierHash;
}

@property (readonly, nonatomic) NSNumber *instanceIdentifier;
@property (readonly, nonatomic) CCItemMessage<CCItemMetaContent> *metaContent;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithContent:(id)a0 metaContent:(id)a1 error:(id *)a2;
- (id)initWithSharedIdentifier:(id)a0 instanceIdentifier:(id)a1 content:(id)a2 metaContent:(id)a3 sourceItemIdentifierHash:(id)a4;
- (BOOL)isEqualToItemInstance:(id)a0;
- (id)sourceItemIdentifierHash;

@end
