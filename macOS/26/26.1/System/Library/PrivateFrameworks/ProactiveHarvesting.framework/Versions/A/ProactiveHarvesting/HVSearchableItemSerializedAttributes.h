@class NSData, CSCoder;

@interface HVSearchableItemSerializedAttributes : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *attributeSetData;
@property (readonly, nonatomic) CSCoder *attributeSetCoder;
@property (readonly, nonatomic) NSData *htmlContentData;

+ (id)serializedAttributesWithAttributeSetData:(id)a0 attributeSetCoder:(id)a1 htmlContentData:(id)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithAttributeSetData:(id)a0 attributeSetCoder:(id)a1 htmlContentData:(id)a2;
- (BOOL)isEqualToSerializedAttributes:(id)a0;

@end
