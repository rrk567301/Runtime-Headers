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

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
