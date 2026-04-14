@class NSNumber, CCItemMessage;
@protocol CCItemMetaContent;

@interface CCItemInstance : CCSharedItem {
    NSNumber *_instanceIdentifier;
}

@property (readonly, nonatomic) NSNumber *instanceIdentifier;
@property (readonly, nonatomic) CCItemMessage<CCItemMetaContent> *metaContent;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithContent:(id)a0 metaContent:(id)a1 error:(id *)a2;
- (id)initWithSharedIdentifier:(id)a0 instanceIdentifier:(id)a1 content:(id)a2 metaContent:(id)a3;
- (BOOL)isEqualToItemInstance:(id)a0;

@end
