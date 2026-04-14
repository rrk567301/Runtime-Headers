@class NSString;

@interface _NSPasteControlConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *localizedTitle;
@property long long displayMode;
@property BOOL enabled;
@property unsigned long long controlSize;
@property unsigned long long lineBreakMode;
@property long long alignment;
@property long long baseWritingDirection;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_commonPasteControlConfigurationInit;

@end
