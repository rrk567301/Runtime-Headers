@class NSString, NSData;

@interface PKSearchOrderResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *orderTypeIdentifier;
@property (copy, nonatomic) NSString *orderIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *spotlightDisplayName;
@property (copy, nonatomic) NSString *contentDescription;
@property (copy, nonatomic) NSData *thumbnailData;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
