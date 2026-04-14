@class NSNumber, NSString;

@interface CHIPTvChannelClusterTvChannelInfo : NSObject

@property (retain, nonatomic) NSNumber *majorNumber;
@property (retain, nonatomic) NSNumber *minorNumber;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *callSign;
@property (retain, nonatomic) NSString *affiliateCallSign;

- (id)init;
- (void).cxx_destruct;

@end
