@class NSNumber, NSString, CSEventFeedback;

@interface CSDonationContext : NSObject

@property (retain, nonatomic) NSNumber *serialNumber;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *protectionClass;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) const char *indexTypeName;
@property (retain, nonatomic) CSEventFeedback *feedback;
@property (nonatomic) unsigned long long spidHandleDonation;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;

@end
