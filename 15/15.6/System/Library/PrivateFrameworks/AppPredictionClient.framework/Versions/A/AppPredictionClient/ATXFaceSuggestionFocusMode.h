@class NSString;

@interface ATXFaceSuggestionFocusMode : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *uuid;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 uuid:(id)a1;

@end
