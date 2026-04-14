@class ATXEntityContextRequestOptionalSignals, ATXMailMessage;

@interface ATXMailContextRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXMailMessage *mailMessage;
@property (readonly, nonatomic) ATXEntityContextRequestOptionalSignals *contextRequestSignals;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMailMessage:(id)a0 additionalContextSignals:(id)a1;

@end
