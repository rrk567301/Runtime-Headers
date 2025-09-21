@class NSObject;
@protocol OS_nw_activity;

@interface COMessageChannelRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_nw_activity> *networkActivity;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
