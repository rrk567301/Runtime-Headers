@class NSString, NSDictionary, NSData;

@interface CNProviderMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long version;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) char isResetRequested;
@property (nonatomic) char isContentEnumerated;
@property (retain, nonatomic) NSData *itemAnchor;
@property (nonatomic) long long itemOffset;
@property (nonatomic) char isMoreComing;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)log;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)initWithCoreDataProviderMetadata:(id)a0;
- (void)applyToCoreDataProviderMetadata:(id)a0;
- (id)initWithVersion:(long long)a0 displayName:(id)a1 userInfo:(id)a2 isResetRequested:(char)a3 isContentEnumerated:(char)a4 itemAnchor:(id)a5 itemOffset:(long long)a6 isMoreComing:(char)a7;

@end
