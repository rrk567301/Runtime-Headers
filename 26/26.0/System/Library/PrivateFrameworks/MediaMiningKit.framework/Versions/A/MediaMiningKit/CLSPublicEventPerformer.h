@class NSString;

@interface CLSPublicEventPerformer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *iTunesIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalizedName:(id)a0 iTunesIdentifier:(id)a1;

@end
