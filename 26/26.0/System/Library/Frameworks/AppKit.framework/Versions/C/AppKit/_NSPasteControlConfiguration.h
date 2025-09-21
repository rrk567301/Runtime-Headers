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

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_commonPasteControlConfigurationInit;

@end
