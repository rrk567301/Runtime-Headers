@class NSString;

@interface SUIBIntelligenceFlowProgressUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float progress;
@property (readonly, copy, nonatomic) NSString *progressDescription;
@property (readonly, copy, nonatomic) NSString *additionalProgressDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithBuilder:(id /* block */)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
