@class NSDictionary;

@interface STDiagnosticsServiceMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long messageCategory;
@property (retain) NSDictionary *userInfo;

+ (id)nameForMessageCategory:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageType:(long long)a0 withUserInfo:(id)a1;

@end
