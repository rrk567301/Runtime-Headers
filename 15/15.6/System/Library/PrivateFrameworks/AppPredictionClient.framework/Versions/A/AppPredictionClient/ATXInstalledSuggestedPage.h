@class NSString;

@interface ATXInstalledSuggestedPage : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *modeUUID;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToATXInstalledSuggestedPage:(id)a0;

@end
