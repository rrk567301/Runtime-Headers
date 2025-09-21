@class NSString, NSData;

@interface NWStatsConnProperties : NSObject

@property (nonatomic) char isTracker;
@property (nonatomic) char isNonAppInitiated;
@property (nonatomic) char isSilent;
@property (nonatomic) char hasNetAccess;
@property (retain, nonatomic) NSString *domainName;
@property (retain, nonatomic) NSString *domainOwner;
@property (retain, nonatomic) NSString *domainTrackerContext;
@property (retain, nonatomic) NSString *domainAttributedBundleId;
@property (retain, nonatomic) NSData *remoteAddress;
@property (readonly, nonatomic) unsigned short remotePort;

- (id)description;
- (void).cxx_destruct;

@end
