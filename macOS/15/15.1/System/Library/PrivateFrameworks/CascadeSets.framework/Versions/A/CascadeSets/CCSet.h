@class NSString, NSArray, BMAccount, NSNumber;

@interface CCSet : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_hash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *encodedDescriptors;
@property (readonly, nonatomic) NSNumber *identifier;
@property (readonly, nonatomic) unsigned short itemType;
@property (readonly, nonatomic) BMAccount *account;
@property (readonly, nonatomic) NSArray *descriptors;

+ (id)setEnumerator;
+ (id)_setHashFromItemType:(unsigned short)a0 encodedDescriptors:(id)a1;
+ (id)descriptorWithKey:(id)a0 descriptors:(id)a1;
+ (id)serializedSetEnumerator:(id)a0;
+ (id)setEnumeratorWithUseCase:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToSet:(id)a0;
- (id)changePublisher;
- (id)descriptorWithKey:(id)a0;
- (id)initWithItemType:(unsigned short)a0 encodedDescriptors:(id)a1 error:(id *)a2;
- (id)changePublisherWithUseCase:(id)a0;
- (id)initWithItemType:(unsigned short)a0 descriptors:(id)a1 error:(id *)a2;
- (id)initWithItemType:(unsigned short)a0 encodedDescriptors:(id)a1 descriptors:(id)a2 error:(id *)a3;
- (id)prefixedInstanceIdentifier:(id)a0;
- (id)prefixedSharedIdentifier:(id)a0;
- (id)serializeWithUseCase:(id)a0 enumerateToBookmark:(id)a1 error:(id *)a2;
- (id)serializeWithUseCase:(id)a0 error:(id *)a1;

@end
