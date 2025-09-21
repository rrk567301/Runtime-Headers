@class NSString, MPCPlaybackAccount;

@interface _MPCQCBMSessionTypeInfo : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) MPCPlaybackAccount *account;
@property (nonatomic) char supported;
@property (copy, nonatomic) NSString *supportedReason;
@property (nonatomic) char exportable;
@property (copy, nonatomic) NSString *exportableReason;

+ (id)infoWithIdentifier:(id)a0 account:(id)a1 supported:(char)a2 supportedReason:(id)a3 exportable:(char)a4 exportableReason:(id)a5;

- (void).cxx_destruct;

@end
