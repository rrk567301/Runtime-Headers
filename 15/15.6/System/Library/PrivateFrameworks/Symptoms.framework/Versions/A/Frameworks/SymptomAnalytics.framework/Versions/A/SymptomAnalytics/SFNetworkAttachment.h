@class NSString, NSSet, NSData, NSDate, NSNumber;

@interface SFNetworkAttachment : NSManagedObject

@property (copy, nonatomic) NSNumber *attrs;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) char isHotSpot;
@property (nonatomic) char isKnownGood;
@property (nonatomic) char isKnownSporadic;
@property (nonatomic) char isLowInternetDL;
@property (nonatomic) char isLowInternetUL;
@property (copy, nonatomic) NSNumber *kind;
@property (retain, nonatomic) NSData *netSignature;
@property (copy, nonatomic) NSNumber *overallStayMean;
@property (copy, nonatomic) NSNumber *overallStayVar;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSNumber *velo;
@property (nonatomic) char wasLastFailed;
@property (nonatomic) double rpmAvg;
@property (nonatomic) double rpmCount;
@property (nonatomic) double rpmVar;
@property (nonatomic) double rpmExitAvg;
@property (nonatomic) double rpmExitCount;
@property (nonatomic) double rpmExitVar;
@property (retain, nonatomic) NSSet *hasDefaultRoute;
@property (retain, nonatomic) NSSet *supportsFlows;

+ (id)entityName;
+ (id)fetchRequest;

@end
