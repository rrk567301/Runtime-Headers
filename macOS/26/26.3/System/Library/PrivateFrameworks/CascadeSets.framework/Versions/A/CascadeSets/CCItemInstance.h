@class NSNumber, CCItemMessage;
@protocol CCItemMetaContent;

@interface CCItemInstance : CCSharedItem {
    NSNumber *_instanceIdentifier;
}

@property (readonly, nonatomic) NSNumber *instanceIdentifier;
@property (readonly, nonatomic) CCItemMessage<CCItemMetaContent> *metaContent;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContent:(id)a0 metaContent:(id)a1 error:(id *)a2;
- (id)initWithSharedIdentifier:(id)a0 instanceIdentifier:(id)a1 content:(id)a2 metaContent:(id)a3;
- (BOOL)isEqualToItemInstance:(id)a0;

@end
