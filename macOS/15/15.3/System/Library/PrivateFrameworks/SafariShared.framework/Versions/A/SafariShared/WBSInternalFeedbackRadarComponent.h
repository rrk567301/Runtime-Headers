@class NSString;

@interface WBSInternalFeedbackRadarComponent : NSObject <NSCopying>

@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariAutoFill;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariIOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariNewBugs;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariStartPageIOS;
@property (class, readonly, copy, nonatomic) WBSInternalFeedbackRadarComponent *safariStartPageMacOS;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 version:(id)a2;

@end
