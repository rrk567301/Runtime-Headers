@class NSString;
@protocol ECEmailAddressConvertible;

@interface EMGroupedSenderCollectionItemID : NSObject <EFCacheable, EMCollectionItemID>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long businessID;
@property (readonly, copy, nonatomic) id<ECEmailAddressConvertible> emailAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cachedSelf;
- (id)initWithBusinessID:(long long)a0;

@end
