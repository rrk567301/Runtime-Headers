@class NSArray, NSString;

@interface WMXPCWindowTransaction : NSObject <NSSecureCoding, WMWindowTransactionSnapshot>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
